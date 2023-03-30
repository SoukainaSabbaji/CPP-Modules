#include "RPN.hpp"

int main(int argc, char *argv[])
{
    int i = 0;
    if (argc < 2)
    {
        std::cout << RED << "Error: no expression provided" << RESET << std::endl;
        return 1;
    }
    std::stack<int> numbers;
    std::string s = argv[1];
    s.erase(std::remove_if(s.begin(), s.end(), ::isspace),
        s.end());
    while (s[i])
    {
        if (isdigit(s[i]))
        {
            char temp[2] = {s[i], '\0'};
            int num = atoi(temp);
            numbers.push(num);
        }
        else
        {
            if (numbers.size() < 2)
            {
                std::cout << RED << "Error: insufficient operands for operator " << s[i] << RESET << std::endl;
                return 1;
            }
            int op2 = numbers.top();
            numbers.pop();
            int op1 = numbers.top();
            numbers.pop();
            switch (s[i])
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
                std::cout << "Error: invalid operator " << s[i] << RESET << std::endl;
                return 1;
            }
        }
        i++;
    }
    if (numbers.size() != 1)
    {
        std::cout << RED << "Error: too many operands" << RESET << std::endl;
        return 1;
    }
    std::cout << numbers.top() << std::endl;
    return 0;
}
