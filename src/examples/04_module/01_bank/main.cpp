#include "atm.h"
#include <vector>
#include <iostream>
#include"customer.h"
#include"checking_account.h"


using std::cout; using std::vector; using std::cin;

int main()
{
	/*BankAccount a;
	BankAccount b = a;
	//scan card and pin number
	//get  customer record from db into a vector
	vector<BankAccount>accounts{ BankAccount(500),BankAccount(500),BankAccount(600),
	BankAccount(1000)};*/
	CheckingAccount a;
	cout << a.get_balance();

	CheckingAccount a(1500);
	/*BankAccount account(9000);
	ATM atm(account);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();
	//cout<atm>*/

	return 0;
}