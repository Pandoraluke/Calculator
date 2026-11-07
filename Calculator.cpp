// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

double addition(double first, double second)
{
	return first + second;
};

double subtraction(double first, double second) {
	return first - second;
};

double division(double first, double second) {
	return first / second;
};

double multiplication(double first, double second) {
	return first * second;
}

double pow(double first, double second) {
	return pow(first, second);
}

int main()
{
	while (true)
	{
		char operation;
		double first, second;
		cout << "enter the first number: ";
		cin >> first;
		if (!cin) {
			cout << "invalid number\n";
			break;
		}
		cout << "enter the operation (+,-,*,/,^): ";
		cin >> operation;
		if (operation != '+' && operation != '-' &&
			operation != '*' && operation != '/' && operation != '^') {
			cout << "error in operation\n";
			break;
		}
		else
		{
			cout << "enter the second number: ";
			cin >> second;
			if (!cin) {
				cout << "invalid number\n";
				break;
			}
			if (operation == '+')
			{
				cout << addition(first, second) << '\n';
			}
			else if (operation == '-')
			{
				cout << subtraction(first, second) << '\n';
			}
			else if (operation == '/')
			{
				if (second == 0)
					cout << "cannot divide by zero\n";
				else
					cout << division(first, second) << '\n';
			}
			else if (operation == '*')
			{
				cout << multiplication(first, second) << '\n';
			}
			else if (operation == '^')
			{
				cout << pow(first, second) << '\n';
			}
		}
	}
}

