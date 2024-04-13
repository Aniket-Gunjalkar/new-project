
/*2:Create cpp application for bank account handling.
2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
Add  constr. (2 constrs : first to accept all details )

2.2 Add Business logic methods
Methods
public void withdraw(double amt) 
public void deposit(double amt)

//2.3: Create object of account class and test withdraw and deposit methods.*/
#include<iostream>
#include<string.h>
using namespace std;
class bankaccount{
	private:
		int no;
		string name;
		protected:
			double balance;
			public:
				bankaccount()
				{
					no=12;
					name="asfd";
					balance=234546;
				}
				bankaccount(int no,string name,double balance)
				{
					this->no=no;
					this->name=name;
					this->balance=balance;
				}
		 void setwithdrow(double amount)
			{
				cout<<"amount"<<this->balance-amount<<endl;
			}
			void setdeposit(double amount)
			{
				cout<<"amount is"<<this->balance+amount<<endl;
			}
	
};
/*class B :public bankaccount{
	protected:
		double amount;
		public:
			
			void setwithdrow(double amount)
			{
				cout<<"amount"<<this->balance-amount<<endl;
			}
			void setdeposit(double amount)
			{
				cout<<"amount is"<<this->balance+amount<<endl;
			}
};*/
int main()
{
	bankaccount bank;
	bank.setwithdrow(10000);	
	bank.setdeposit();
}
