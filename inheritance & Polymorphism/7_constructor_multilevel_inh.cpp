/*

7. Write a C++ Program to illustrates the use of Constructors in multilevel 
inheritance

*/

#include<iostream>

using namespace std;

class Base1
{
	public :
			Base1()
			{
					cout<<"\n\n\t Base class 1 is called.";
			}	
};

class Base2 : public Base1
{
	public :
			Base2()
			{
					cout<<"\n\n\t Base class 2 is called.";
			}	
};

class Derived : public Base2
{
	public :
			Derived()
			{
					cout<<"\n\n\t Derived class is called.";
			}		
};


main()
{
	Derived D;
}


