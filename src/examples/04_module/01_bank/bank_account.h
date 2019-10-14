//bank_account.h
#ifndef BANK_ACCOUNT_H //header guards-to prevent class redefintion
#define BANK_ACCOUNT_H
class BankAccount
{
public:
	BankAccount();
	int get_balance() const; //const makes class members read only
	void deposit(int amount);
	void withdraw(int amount);
	BankAccount(int b) : balance(b) {}; //inline constuctor
	friend void display(const BankAccount& account);
	friend std:ostream & operator<<(std::ostream & out, const BankAccount & b);
	friend std::istream &operator >> (std::istream & in, BankAccount & b);

protected:
	int balance;
	
};
#endif
