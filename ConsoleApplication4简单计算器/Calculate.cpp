#include "stdafx.h"
#include "Calculate.h"
Calculate::Calculate()
{
	
}
void Calculate::count(int number1, int number2, string ysf)
{
	int a;
	if (ysf == "+")
		a = 1;
	else if (ysf == "-")
		a = 2;
	else if (ysf == "*")
		a = 3;
	else
		a = 4;
	switch (a)
	{
	case 1:cout << "number1 + number2=" << number1 + number2 << endl; break;
	case 2:cout << "number1 - number2=" << number1 - number2 << endl; break;
	case 3:cout << "number1 * number2=" << number1*number2 << endl; break;
	case 4:double cf =( number1 / number2); cout << "number1/number2=" << cf<< endl; break;
	}
}
void Calculate::count(string a, string b, string c)
{
	if (c == "+")
		cout << a << "+" << b << "=" <<( a+b )<< endl;
	else {
		if (c == "-")
			cout << a << "-" << b << "="  << endl;
	}

}
void Calculate::Equals(int a, int b)
{
	if (a == b)
		cout << "number1和number2相等" << endl;
	else
		cout << "number1不等于number2" << endl;
}
Calculate::~Calculate()
{
}
