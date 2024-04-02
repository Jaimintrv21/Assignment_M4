/*

1. Write a program of to swap the two values using template

*/

#include <iostream>
using namespace std;

class Swap
{
	int n1,n2;
	
	public :
	
		template <class X, class Y>
		void swap_num(X n1, Y n2)
		{
			Y c;
			c = n1;
			n1 = n2;
			n2 = c;
			
			cout<<"\n\n\t After Swaping.............";
			cout<<"\n\n\t N1 = "<<n1;
			cout<<"\n\n\t N2 = "<<n2;
			
		}	
};
main()
{
	int n1,n2;
	
	cout<<"\n\n\t Please Entre N1 : ";
	cin>>n1;
	
	cout<<"\n\n\t Please Entre N2 : ";
	cin>>n2;
	
	Swap s;
	
	s.swap_num(n1,n2);
}
