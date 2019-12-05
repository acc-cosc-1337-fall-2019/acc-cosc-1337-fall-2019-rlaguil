//constructor use for loop to initialize account to increments of 10 balance (5 times)
//display iterate and display array
//free memory using a loop to delete an nullify

#include "src/examples/12_module/08_arrays_dyn_1/bank_account.h"
//default constructor create dyanamic array of 5 Bank accounts
//display function iterate with an indexed for and display balance
//destructor free memory
class MyReport
{
public:
	MyReport();
	void display()const;
	~MyReport();

private:
	BankAccount** accounts;//pointer to pointer
	const int SIZE = 5;
};
MyReport::MyReport()
	:accounts{ new BankAccount*[SIZE] }///save 5 memory adresses
{
	//creats dynamic mem(heap) for each pf the 5 adresses
	for (int i = 0; i < SIZE; ++i)
	{
		accounts[i] = new BankAccount(i * 10);//calls def constructor
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
