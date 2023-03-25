#include "RPN.hpp"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << RED << "Error: no expression provided" << RESET << std::endl;
        return 1;
    }
    std::stack<int> numbers;
    char *token = strtok(argv[1], " ");
    while (token != NULL)
    {
        if (isdigit(token[0]))
        {
            int num = atoi(token);
            numbers.push(num);
        }
        else
        {
            if (numbers.size() < 2)
            {
                std::cout << RED << "Error: insufficient operands for operator " << token << RESET<< std::endl;
                return 1;
            }
            int op2 = numbers.top();
            numbers.pop();
            int op1 = numbers.top();
            numbers.pop();
            switch (token[0])
            {
            case '+':
                numbers.push(op1 + op2);
                break;
            case '-':
                numbers.push(op1 - op2);
                break;
            case '*':
                numbers.push(op1 * op2);
                break;
            case '/':
                if (op2 == 0)
                {
                    std::cout << RED << "Error: division by zero" << RESET << std::endl;
                    return 1;
                }
                numbers.push(op1 / op2);
                break;
            default:
                std::cout << "Error: invalid operator " << token << RESET << std::endl;
                return 1;
            }
        }
        token = std::strtok(NULL, " ");
    }

    if (numbers.size() != 1)
    {
        std::cout << RED << "Error: too many operands" << RESET << std::endl;
        return 1;
    }

    std::cout << numbers.top() << std::endl;

    return 0;
}
