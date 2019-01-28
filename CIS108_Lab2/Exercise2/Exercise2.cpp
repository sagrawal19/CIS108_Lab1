// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>
#include<ctime>
#include<time.h>
using namespace std;

int currentYear()
{
	struct tm newtime;
	time_t now = time(0); // 2018-23-09 12:10:13:0004
	localtime_s(&newtime, &now);// year: 2018, day: 23: month: 09, hour
	return ((newtime.tm_year) + 1900);
}

int main()
{
	string title, author;
	int year, page,bookAge;

    cout << "Enter the book title :";
	getline(cin, title);
	
	cout << "Enter the author :";
	getline(cin, author);
	
	cout << "Enter the publish year :";
	cin>>year;
	
	cout << "Enter the total number of page :" ;
	cin >> page;
	
	bookAge = currentYear() - year;

	if (bookAge < 10)
	{
		cout << "This book is younger than ten years old." << endl;
	}
	else
	{
		cout << "This book is at least ten years old." << endl;
	}
        
	if (page < 100)
	{
		cout << "This book is a short book." << endl;
	}
	else if(page >= 100 && page <= 300)
	{
		cout << " This book is an average book." << endl;
	}
	else
	{ 
		cout << "This book is a long book." << endl;
	}
}





