#pragma once
#include<string>
#include<iostream>
using namespace std;
class Calculate
{
public:
	int number1, number2;
	string ysf;
	Calculate();
	void count(int a,int b,string c);
	void count(string a, string b, string c);
	void Equals(int a,int b);
	~Calculate();
};

