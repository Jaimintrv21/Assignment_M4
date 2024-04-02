/*

12. Write a program to swap the two numbers using friend function 
without using third variable

*/
#include<iostream>
using namespace std;

class Swap
{
	int a, b;
	
	friend void swap_no(Swap s) 
	{
					
					s.a = s.a + s.b ;
					s.b = s.a - s.b ;
					s.a = s.a - s.b ;
					
					cout<<"\n\n\t After Swaping.........";
					cout<<"\n\n\t A = "<<s.a;
					cout<<"\n\n\t B = "<<s.b;
					
	}
	
	public :
				void getdata(int x, int y) //x=20  y=50
				{
					a=x; 
					b=y; 
				}
				
				
				
};

main()
{
	int a,b;
	
	Swap obj;
	
	cout<<"\n\n\t Enter Number A : ";
	cin>>a;
	
	cout<<"\n\n\t Enter Number B : ";
	cin>>b;
	
	obj.getdata(a,b);
	
	swap_no(obj);
}



