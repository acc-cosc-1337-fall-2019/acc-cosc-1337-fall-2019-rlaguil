//write code for for stack_array and display each element to screen
#include"arrays_mem.h"
#include<iostream>
void stack_array()
{
	const int SIZE = 5;
	int hours[SIZE] = { 5,10,30,20,7 };
	hours[0] = 50;//access and modify
	//iterate an array
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << hours[i] << "\n";
	}
	std::cout << "\n";
	//iterate w for ranged
	for (auto hour : hours) //have to use a reference to modify
	{
		std::cout << hour << "\n";
	}
	std::cout << "\n";
	//pointer to first hours arrat element
	int* first_element = hours;
	std::cout << "First element:" << *first_element << "\n";
	std::cout << "Second element:" << *(first_element + 1) << "\n";
	*first_element++;
	*first_element++;
	std::cout << "Third element:" << *first_element++ << "\n";
	*first_element--;
	std::cout << "Third element:" << *first_element-- << "\n\n";

	int* hours_ptr = hours;
	//iterate array W A POINTER FORWARD
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << *hours_ptr << "\n";
		hours_ptr++;
	}
	std::cout << "\n"; 
	//iterate array pointer backwards
	for (int i = 0; i < SIZE; i++)
	{
		hours_ptr--;
		std::cout << *hours_ptr << "\n";
	}
}