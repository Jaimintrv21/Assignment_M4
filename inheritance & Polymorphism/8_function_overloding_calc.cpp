/*

8. Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading


*/
#include<iostream>
using namespace std;

class Math
{
	int a, b;
	float c;
	double d, e;
	
	public :
				void Calculate(int x, int y)  //+
				{
					a=x;
					b=y;
					cout<<"\n\n\t Addition = "<<a+b;
				}
				float Calculate(int x, int y, float z)  //-
				{
					a=x;
					b=y;
					c=z;
					return a-b;
					//cout<<"\n\n\t Subtraction = "<<x-z;
				}
				double Calculate(double x, double y, int v, int t)
				{
					d=x;
					e=y;
					return d*e;
				}
					
};

main()
{
	Math M;
	M.Calculate(10,50); //+
	cout<<"\n\n\t Subtraction : "<<M.Calculate(500,20, 6.6); //-
	cout<<"\n\n\t Multiplication = "<<M.Calculate(55, 77, 89, 90); //*
}

