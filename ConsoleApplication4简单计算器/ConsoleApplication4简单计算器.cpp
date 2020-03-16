// ConsoleApplication4简单计算器.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"Calculate.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int number1, number2;
	string string1, string2;
	string ysf1,ysf2;
	Calculate c;
	cout << "请依次输入number1、运算符ysf1、number2" << endl;
	cin >> number1;
	cin >> ysf1;
	cin >> number2;
	c.count(number1, number2, ysf1);
	c.Equals(number1, number2);
	cout << "请依次输入string1、运算符ysf2、string2" << endl;
	cin >> string1;
	cin >> ysf2;
	cin >> string2;
	c.count(string1, string2, ysf2);
    return 0;
}

