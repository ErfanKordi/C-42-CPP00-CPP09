#include "RPN.hpp"
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <RPN expression>" << std::endl;
        return 1;
    }

    std::string expression = argv[1];
    std::istringstream iss(expression);
    std::stack<int> stack;
    std::string token;

    while (iss >> token)
    {
        if (isOperator(token))
        {
            if (stack.size() < 2)
                error("Insufficient operands for the operator");
            int b = stack.top();
            stack.pop();
            int a = stack.top();
            stack.pop();
            int result = applyOperator(token, a, b);
            stack.push(result);
        }
        else
        {
            int number;
            std::istringstream tokenStream(token);
            if (!(tokenStream >> number))
                error("Invalid token encountered");
            stack.push(number);
        }
    }
    if (stack.size() != 1)
        error("The RPN expression is invalid");
    std::cout << stack.top() << std::endl;
    return 0;
}
