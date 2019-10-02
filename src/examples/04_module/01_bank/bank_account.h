//bank_account.h
class BankAccount
{
public:
	BankAccount();
	BankAccount(int b) : balance(b) {}; //inline constuctor
	void deposit(int amount);
	void withdraw(int amount);
	int get_balance() const; //const makes class members read only

private:
	int balance;

};