#include "pch.h"
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;


int main()
{
	string firstname, lastname;
	int age;
	double confidence;
	cout << "Enter firstname= " << endl;
	cin >> firstname;
	cout << "Enter lastname= " << endl;
	cin >> lastname;
	cout << "Enter their age= " << endl;
	cin >> age;
	cout << "Enter your confidence in programmers in percentage (0-100):" << endl;
	cin >> confidence;
	cout << "Hello " << firstname << " " << lastname + ",nice to meet you! \n you might be " << age << " in human years,but in dog years you are " << age * 7 << "." << endl;
	if (confidence <= 0.5)
	{
		cout << "I agree, programmers can’t be trusted!" << endl ;

	}
	else

	{
		cout << "Writing good code takes hard work!" << endl;
	}

		
	return 0;

}