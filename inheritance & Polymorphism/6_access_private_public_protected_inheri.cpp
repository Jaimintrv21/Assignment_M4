/*

6. Write a C++ Program to show access to Private Public and Protected using 
Inheritance

*/
#include<iostream>
using namespace std;
class Base
{
	private :
			int a;    //accessible for this class only.
			
	protected :
			int b;  //accessible for derived class only.
			
	public :
			int c;    //accessible for derived class & main function. 
			
			int get_a()  //'a' for this class only.
			{
				a=100;
				return a;	
			}	
	
};

class Derived : public Base
{
	public :
			int get_b()  //'b' for derived class only.
			{
				cout<<"\n\n\t Private member a = "<<get_a();
				b=200;
				return b;	
			}
			
			int get_c()  //'c' for derived class & main function.
			{
				c=300;
				return c;	
			}		
};

main()
{
		Derived D;
	
		cout<<"\n\n\t Protected member b = "<<D.get_b();
		cout<<"\n\n\t Public member c = "<<D.get_c();
			D.c=400;
		cout<<"\n\n\t Public member c = "<<D.c;
}

