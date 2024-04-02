/*

6. Write a C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables.

*/

#include <iostream>
using namespace std;

class Person
{
	string name,country;
	int age;
	
	public :
			void get_info()
			{
				cout<<"\n\n\t Please Enter Your Name : ";
				cin>>name;
				
				cout<<"\n\n\t Please Enter Your Country : ";
				cin>>country;
				
				cout<<"\n\n\t Please Enter Your Age : ";
				cin>>age;				
			}
			
			void print_info()
			{
				cout<<"\n\n\t Your Name Is "<<name;
				cout<<"\n\n\t Your Age is "<<age;
				cout<<"\n\n\t Your Country Is "<<country;
			}
};
main()
{
	Person p;
	p.get_info();
	p.print_info();
}
