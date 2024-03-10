/*
 * main.cpp
 *
 *  Created on: Mar 9, 2024
 *  Author: marsh
 */

#include <iostream>
#include <limits>
#include <sstream>
using namespace std;

void setIntFromInput(int *p)
	{

		//requests number from user
		std::cout << "Please, enter a number.";
		std::cin >> *p;

			while (std::cin.fail())
			{
				//cleares buffer/ignores rest of input stream
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
				//requests number from user, and prompts with error message
				std::cout<<"Error! Try again!" << endl;
				std::cout <<"Please, enter a number." << endl;
				std::cin >> *p;
			}
	}

int main() {

	//program start

	//integer pointers to dynamic memory
	int *p1 = new int;
	int *p2 = new int;
	int *p3 = new int;

	//asks the user to enter three integer values as input
	setIntFromInput(p1);
	setIntFromInput(p2);
	setIntFromInput(p3);

	//stores the values into three different variables
	int num1 = *p1;
	int num2 = *p2;
	int num3 = *p3;

	//displays the contents of the variables and pointers
	cout << "The first number is " << num1 << ", and its value is held at address: " << p1 << endl;
	cout << "The second number is " << num2 << ", and its value is held at address: " << p2 << endl;
	cout << "The third number is " << num3 << ", and its value is held at address: " <<  p3 << endl;

	//deletes and sets pointer to null pointer to manage memory before exit
	delete p1;
	p1 = nullptr;
	delete p2;
	p2 = nullptr;
	delete p3;
	p3 = nullptr;

	return 0;
	//program end
}


