#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int age;
	float temp;
	//float temp_celsius;
	// user to enter their age, and
	//store their inputted age into a variable//

	cout << "Enter your age: ";
	cin >> age;


	//an expression that calculates their age in 10 years. Assign this to a new variable,
	//and output a message to the console informing the user of how old they will be in 10 years.

	cout << "In 10 years you will be " << age + 10 << " years old." << endl;


	// to enter the current temperature in degrees Fahrenheit, storing the temperature 
	
	cout << "Enter the temperature in degrees Fahrenheit : ";
	cin >> temp;
	//temp_celsius = ((temp - 32)*5) / 9;
	cout << "The temperature in degree Celsius is " << ((temp - 32) * 5) / 9 << endl;

	//The temperature in degree Celsius is

	return 0;
}

