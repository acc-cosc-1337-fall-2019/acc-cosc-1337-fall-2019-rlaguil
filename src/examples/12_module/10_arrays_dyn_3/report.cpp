
#include "report.h"
#include<iostream>
MyReport::MyReport()
	:accounts{new BankAccount[SIZE]}///save 5 memory adresses
{
	//creats dynamic mem(heap) for each pf the 5 adresses
	for (int i = 0; i < SIZE; ++i)
	{
		accounts[i] = new BankAccount(i*10);//calls def constructor
	}
	}
	

Void MyReport::display() const
{
	for (int i = 0; i < SIZE; ++i)
	{
	std:; cout << accounts[i]->get_balance() << "\n";
	}
}
MyReport::~MyReport()
{
	for (int i = 0; i < SIZE; ++i)
	{
		delete accounts[i];
	}
	delete[] accounts;
}
