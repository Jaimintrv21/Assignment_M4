// 1. WAP to create simple calculator using class

#include <iostream>
using namespace std;
class calc
{
	int num1,num2;
	char choise;
	
	public :
			void get_num()
			{
				cout<<"\n\n\t Enter Number 1 : ";
				cin>>num1;
				
				cout<<"\n\n\t Enter Number 2 : ";
				cin>>num2;
				
				cout<<"\n\n\t Select choise : ";
				cout<<"\n\t 1) + ";
				cout<<"\n\t 2) - ";
				cout<<"\n\t 3) * ";
				cout<<"\n\t 4) / ";
				cin>>choise;
			}
			
			void print_ans()
			{
				switch(choise)
				{
					case '1'  :
								cout<<"\n\n\t"<<num1+num2;
								break;
					case '2':
								cout<<"\n\n\t"<<num1-num2;
								break;
					case '3' :
								cout<<"\n\n\t"<<num1*num2;
								break;
					case '4'  :
								cout<<"\n\n\t"<<num1/num2;
								break;
					default : 
							cout<<"\n\n\t Please Select Valid Option";
				}
			}
};
main()
{
	calc c;
	c.get_num();
	c.print_ans();
}
