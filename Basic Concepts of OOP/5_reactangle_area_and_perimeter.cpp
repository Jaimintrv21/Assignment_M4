/*

5. Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter.

*/

#include <iostream>
using namespace std;

class Rectangle
{
	int length,	width, area, perimeter;
	
	public :
			void get_data()
			{
				cout<<"\n\n\t Please Enter lenght : ";
				cin>>length;
				
				cout<<"\n\n\t Please Enter width : ";
				cin>>width;
			}
			
			void print_ans()
			{
				area = width*length;
				perimeter = 2*(width+length);
				
				cout<<"\n\n\t Rectangle's area is : "<<area;
				cout<<"\n\n\t Rectangle's Perimeter is : "<<perimeter;
			}
};
main()
{
	Rectangle r;
	r.get_data();
	r.print_ans();
}
