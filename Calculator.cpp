// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

double addition(double first, double second)
{
	return first + second;
};

double substraction(double first, double second) {
	return first - second;
};

double division(double first, double second) {
	return first / second;
};

double multiplication(double first, double second) {
	return first * second;
}

int main()
{
	char operation;
	double first, second;
	cout << "enter the first number: ";
	cin >> first;
	cout << "enter the operation (+,-,*,/): ";
	cin >> operation;
	if (operation != '+' && operation != '-' &&
		operation != '*' && operation != '/') {

	}

	cout << "enter the second number: ";
	cin >> second;
	
	if (operation=='+')
	{
		cout<<addition(first, second);
	}
	else if (operation == '-')
	{
		cout << substraction(first, second);
	}
	else if (operation=='/')
	{
		cout << division(first, second);
	}
	else if (operation=='*')
	{
		cout << multiplication(first, second);
	}
	else
	{
		cout << "error";
	}
}

