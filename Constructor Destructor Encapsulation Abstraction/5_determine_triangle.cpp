/*

5. Write a C++ program to create a class called Triangle that has private 
member variables for the lengths of its three sides. Implement member 
functions to determine if the triangle is equilateral, isosceles, or scalene.

equilateral = tree Equal Side
isosceles = two equl side
scaleno = no equal side

*/

#include <iostream>
using namespace std;

class Triangle
{
	int l1,l2,l3;
	
	public :
			void get_size()
			{
				cout<<"\n\n\t Enter Three Sides : ";
				cin>>l1>>l2>>l3;
			}
			void determine()
			{
				if(l1==l2 && l1 == l3)
				{
					cout << "\n\n\t Triangle Is Equilateral Because All Sides Are Equal";
				}
				else if (l1 == l2 || l1 == l3 || l2 == l3)
				{
					cout << "\n\n\t Triangle Is Isosceles Because Two Sides Are Equal";
				}
				else
				{
					cout<<"\n\n\t Triangle Is Scaleno Beacause Of No Side Equal";
				}
			}	
};
main()
{
	Triangle t;
	t.get_size();
	t.determine();	
}
