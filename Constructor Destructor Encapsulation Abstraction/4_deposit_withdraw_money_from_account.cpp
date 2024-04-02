/*

4. Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account.


*/

#include <iostream>
using namespace std;

class Bank_Account
{
	int accountNumber,deposit,withdraw,balance;
	
	public :
			
			Bank_Account(int accNum, double ini_Balance) 
			{
		        accountNumber = accNum;
		        balance = ini_Balance;
    		}
			void withd()
			{
				cout<<"\n\n\t Your Current Balance Is "<<balance;
				cout<<"\n\n\t Enter Amount For Withdrawal : ";
				cin>>withdraw;
				if(withdraw > balance)				
				{
					cout<<"\n\n\t Insuficient Balance ";
				}
				else
					{
						balance -= withdraw;
						cout<<"\n\n\t Amout Withdraw Succefully";
						cout<<"\n\n\t Your Updated Balance Is "<<balance;				
					}				
			}
			void depo()
			{
				cout<<"\n\n\t Your Current Balance Is "<<balance;
				cout<<"\n\n\t Enter Amount For Deposit : ";
				cin>>deposit;
				balance += deposit;
				cout<<"\n\n\t Amout Deposite Succefully";
				cout<<"\n\n\t Your Updated Balance Is "<<balance;
			}
		
};
main()
{
	double accountNumber,balance;
	
	cout<<"\n\n\t Enter Your Account Number : ";
	cin>>accountNumber;
	
	cout<<"\n\n\t Enter Your Initial Deposit : ";
	cin>>balance;
	
	Bank_Account b(accountNumber,balance);
	b.depo();
	b.withd();
}
