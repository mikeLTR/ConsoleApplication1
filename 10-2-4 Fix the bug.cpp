#include <iostream>

using namespace std;

class BankAccount
{
public:
	BankAccount(); //set balance to 0
	void deposit(double amount);
	void withdraw(double amount);
	double get_balance() const;
private:
	double balance;
};

BankAccount::BankAccount() { balance = 0; }
void BankAccount::deposit(double amount) { balance = balance + amount; }
void BankAccount::withdraw(double amount) { balance = balance - amount; }
double BankAccount::get_balance() const { return balance; }

class CheckingAccount:public BankAccount
{
public:
	void month_end();

private:
	double balance;
};

void CheckingAccount::month_end()
{
	if (get_balance() < 100)
	{
		withdraw(10);
	}
}

int main()
{
	CheckingAccount acct1;
	acct1.deposit(1000);
	cout << "Account balance before the end of the month:";
	cout << acct1.get_balance() << endl;
	acct1.month_end();
	cout << "Account balance after end of the month: ";
	cout << acct1.get_balance() << endl;
	cout << "Expectd after month end: 1000\n" << endl;

	CheckingAccount acct2;
	acct2.deposit(900);
	cout << "Account balance before the end of the month:";
	cout << acct2.get_balance() << endl;
	acct1.month_end();
	cout << "Account balance after end of the month: ";
	cout << acct2.get_balance() << endl;
	cout << "Expectd after month end: 890\n" << endl;

}
