#include "Calculator.h"
#include <iostream>

using namespace std;
using namespace CALCULATOR;

int main() {
	double num1 = 0.0;
	double num2 = 0.0;
	double result = 0.0;
	char oper = '+';

	cout << "CALCULATOR BY SOETCH" << endl;
	cout << "Write your operation :" << endl;

	Calculator calc;
	while (true)
	{
		cin >> num1 >> oper >> num2;
		result = calc.Calculate(num1, oper, num2);
		cout << "Result : " << result << endl;
	}
	
	return 0;
}