/*

13. Write a program to find the max number from given two numbers 
using friend function

*/

#include<iostream>
using namespace std;

class Max_No
{
	int a, b;
	
	friend void find_max(Max_No M)  //M=obj
	{
					if(M.a>M.b)
						cout<<"\n\n\t"<<M.a<<" is Maximum...";
					else
						cout<<"\n\n\t"<<M.b<<" is Maximum...";
	}
	
	public :
				void getdata(int x, int y) //x=20  y=50
				{
					a=x; //a=20
					b=y;  //b=50
				}
				
				
				
};

main()
{
	int a,b;
	
	Max_No obj;
	
	cout<<"\n\n\t Enter Number 1 : ";
	cin>>a;
	
	cout<<"\n\n\t Enter Number 2 : ";
	cin>>b;
	
	obj.getdata(a,b);
	
	find_max(obj); //obj : 20,50
}



