#include "Calculator.h"
#include <iostream>

using namespace CALCULATOR;
using namespace std;

double Calculator::Calculate(double num1, char oper, double num2)
{
	switch (oper) {
		case '+':
			return num1 + num2;
		case '-': 
			return num1 - num2;
		case '/':
			return num1 / num2;
		case '*': 
			return num1 * num2;
		default:
			return 0.0;
	}
}
