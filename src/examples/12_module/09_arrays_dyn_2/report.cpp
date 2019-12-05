//

#include "report.h"
#include<iostream>
Report::Report()
{
	//creats dynamic mem(heap)
	accounts = new BankAccount[SIZE];//calss def constructor
}

Void Report::display() const
{
	for (int i = 0; i < SIZE; ++i)
	{
	std:; cout << accounts[i].get_balance() << "\n";
	}
}
Report::~Report()
{
	delete[] accounts;
}
