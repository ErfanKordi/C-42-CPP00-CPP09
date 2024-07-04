#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>


void error(const std::string& message);
bool isOperator(const std::string& token);
int applyOperator(const std::string& op, int a, int b);

#endif // RPN_HPP
