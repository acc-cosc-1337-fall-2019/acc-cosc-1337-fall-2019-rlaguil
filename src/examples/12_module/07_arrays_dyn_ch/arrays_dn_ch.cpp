//cpp
#include"arrays_dyn_ch.h"
#include<iostream>

void dynamic_char_array()
{
	const int SIZE = 10;
	char* name = new char[SIZE];
	std::cout << "Enter Name: ";
	std::cin.getline(name, SIZE);

	std::cout << name << '\n';

	delete[] name;
	name = nullptr;

	char* name1 = new char[SIZE];
	name1[0] = 'J';
	name1[1] = 'o';
	name1[2] = 'e';
	name1[3] = '\0'; //terminate the char array
	std::cout << name1 << "\n";

	delete[] name1;
	name1 = nullptr;

	char* name2 = new char[SIZE]();
	name2[0] = 'J';
	name2[1] = 'o';
	name2[2] = 'h';
	name2[3] = 'n'; //terminate the char array
	std::cout << name2 << "\n";

	delete[] name2;
	name2 = nullptr;

}