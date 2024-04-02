/*

4. Write a C++ program to implement a class called Circle that has private 
member variables for radius. Include member functions to calculate the 
circle's area and circumference.

*/
#include <iostream>
using namespace std;

class circle
{
	int radius,area,circum;
	
	public : 
			void get_radius()
			{
				cout<<"\n\n\t Please Enter Radius : ";
				cin>>radius;
			}	
			void print_ans()
			{
				area = 3.14*radius*radius;
				circum = 2*3.14*radius;
				cout<<"\n\n\t Circle Area Is : "<<area;
				cout<<"\n\n\t circumference Of Circle Is : "<<circum;
			}
};
main()
{
	circle c;
	c.get_radius();
	c.print_ans();
}
