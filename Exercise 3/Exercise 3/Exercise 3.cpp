// Exercise 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int  n = 1000, i=1;
	int addPrime = 0;
	int MulPrime = 1;

	for (i = 2; i <= n; i++)
	{
		//Need to check if I is a prime number or not
		//How to check if a number is prime or not
		//Check if the remainder of that number is 0, then it's not a prime number. But check until half and if we prime that the remainder is 0 , then break from the loop
		
		bool isPrime = true;
		for (int j = 2;j <= i/2;j++)
		{
			if (i%j == 0) 
			{
				//This means it's not a prime number

				isPrime = false;
				break;

			}
		} // After this loop, you need to know whether the number is prime or not
		
		if (isPrime)
		{
			//Now here we know i is a prime number
			//We need to add this number to existing sum of prime numbers and same also for multiplication
			addPrime = addPrime + i;
			MulPrime = MulPrime * i;
		}
	} // we will get the prime number addition in variable addPrime and multiplication in MulPrime

	cout << "The sum of every prime number between 1-1000 is : " << addPrime << endl;
	cout << "the product of every prime number between 1-1000 is :" << MulPrime << endl;
		
	return 0;
}



