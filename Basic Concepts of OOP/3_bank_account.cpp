/*

2. Define a class to represent a bank account. Include the following members:
	
	3. Data Member:
		-Name of the depositor
		-Account Number
		-Type of Account
		-Balance amount in the account
		
	Member Functions
		-To assign values
		-To deposited an amount
		-To withdraw an amount after checking balance
		-To display name and balance

*/

#include <iostream>
using namespace std;

class b_account
{
	string name,type;
	int ac_num,balance,deposit,withdraw,option;	
	
	public :
	
	int menu;
	
			void get_data()
			{
				cout<<"\n\n\t Please Entre Your Name : ";
				cin>>name;
				
				cout<<"\n\n\t Please Select Account Type : ";
				cout<<"\n\t 1) Currunt";
				cout<<"\n\t 2) Saving";
				cout<<"\n\t";
				cin>>option;
				
				if(option > 2)
				{
					cout<<"\n\n\t Invalid Option";	
				}					
				else if (option == 1)
				{
					type = "current";
				}
				else
				{
					type = "saving";
				}
				
				cout<<"\n\n\t Please Enter Your First Deposit : ";
				cin>>balance;
			}
			
			
			void depo()
			{
				cout<<"\n\n\t Your Current Balance Is : "<<balance;
				cout<<"\n\n\t Please Enter Amount You Want Deposit : ";
				cin>>deposit;
				balance = deposit+balance;				
			}
			
			
			void with()
			{
				cout<<"\n\n\t Your Current Balance Is : "<<balance;
				cout<<"\n\n\t Please Enter Amount For Withdraw : ";
				cin>>withdraw;
				
				 if (withdraw <= balance) 
				 {
            		balance = balance - withdraw;
        		 } 
				 else 
				 {
            		cout << "\n\n\t Insufficient Balance!";
        		 }
			}
			
			
			void balance_dis()
			{
				cout<<"\n\n\t Hello "<<name;
				cout<<"\n\n\t Your Account Balance is "<<balance;
			}
			
			
			void menu_option()
			{
				cout<<"\n\n\t Please Select Operation ";
				cout<<"\n\t 1) Deposit Money";
				cout<<"\n\t 2) Withdraw Money";
				cout<<"\n\t 3) Show Balance";
				cout<<"\n\t 4) exit";
				cout<<"\n\t";
				cin>>menu;
			}
};
main()
{
	b_account b;
	b.get_data();
		
	while (b.menu != 4) 
	{
        b.menu_option();
        
        if (b.menu == 1) 
		{
            b.depo();
        } 
		else if (b.menu == 2) 
		{
            b.with();
        } 
		else if (b.menu == 3) 
		{
            b.balance_dis();
        }
    }
}
