/*

2. Write a program of Addition, Subtraction, Division, Multiplication using 
constructor.


*/

#include <iostream>
using namespace std;

class calc
{
	int num1,num2,choise;
	
	public :
			calc(int x, int y,int c)
			{
				num1=x;
				num2=y;
				choise=c;
			}
			
			void ans()
			{
				switch(choise)
				{
					case 1 :
							cout<<"\n\n\t Answer = "<<num1+num2;
							break;
					case 2 :
							cout<<"\n\n\t Answer = "<<num1-num2;
							break;
					case 3 :
							cout<<"\n\n\t Answer = "<<num1*num2;
							break;
					case 4 :
							cout<<"\n\n\t Answer = "<<num1/num2;
							break;
					default :
							cout<<"\n\n\t Invalid Select";
				}
			}
};
main()
{
	int num1,num2,choise;
	
	cout<<"\n\n\t Please Enter Number 1 : ";
	cin>>num1;
	
	cout<<"\n\n\t Please Enter Number 2 : ";
	cin>>num2;
	
	cout<<"\n\n\t Please Select Choise ";
	cout<<"\n\t 1) Addition (+)";
	cout<<"\n\t 2) Substraction (-) ";
	cout<<"\n\t 3) Multiplication (*) ";
	cout<<"\n\t 4) Division (/) ";
	cout<<"\n\t";
	cin>>choise;
	calc c(num1,num2,choise);
	c.ans();
}
