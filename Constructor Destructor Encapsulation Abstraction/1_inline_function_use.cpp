/*

1. Write a program to find the multiplication values and the cubic values using 
inline function

*/

#include <iostream>
using namespace std;

class inlinee
{
	int a,b,multi,cubic;
	
	public :
			void get_data()
			{
				cout<<"\n\n\t Enter Number 1 : ";
				cin>>a;
				
				cout<<"\n\n\t Enter Number 2 : ";
				cin>>b;
			}
			
			inline void ans()
			{
				multi = a * b;
				cubic = (a*b)*(a*b)*(a*b);
				
				cout<<"\n\n\t multiplication Ans "<<multi;
				cout<<"\n\n\t Cubic Ans "<<cubic;
			}
};
main()
{
	inlinee i;
	i.get_data();
	i.ans();
}
