/*

3. Write a C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables.

*/

#include <iostream>
using namespace std;

class Car 
{
	int year;
	string company,model;
	
	public :
			void get_car_data()
			{
				cout<<"\n\n\t Please Enter Company Name : ";
				cin>>company;
				
				cout<<"\n\n\t Please Enter Model Name : ";
				cin>>model;
				
				cout<<"\n\n\t Please Enter Year : ";
				cin>>year;
			}
			
			void print_car_data()
			{
				cout<<"\n\n\t Company Name "<<company;
				cout<<"\n\n\t Model Name "<<model;
				cout<<"\n\n\t Purchase Year "<<year;
			}
};
main()
{
	Car c;
	c.get_car_data();
	c.print_car_data();
}
