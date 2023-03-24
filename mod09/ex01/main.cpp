#include "RPN.hpp"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cerr << "Error: no expression provided" << endl;
        return 1;
    }

    stack<int> numbers;
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
                std::cerr << "Error: insufficient operands for operator " << token << endl;
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
                    std::cerr << "Error: division by zero" << endl;
                    return 1;
                }
                numbers.push(op1 / op2);
                break;
            default:
                cerr << "Error: invalid operator " << token << endl;
                return 1;
            }
        }
        token = std::strtok(NULL, " ");
    }

    if (numbers.size() != 1)
    {
        std::cerr << "Error: too many operands" << endl;
        return 1;
    }

    std::cout << numbers.top() << endl;

    return 0;
}
