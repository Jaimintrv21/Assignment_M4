/*

11. Write a program to calculate the area of circle, rectangle and triangle 
using Function Overloading
Rectangle: Area * breadth 
Triangle: ½ *Area* breadth 
Circle: Pi * Area *Area

*/

#include<iostream>
using namespace std;

class Answer
{
	int area ,breadth , c, rec;
	float pi,cir,tri;
	
	public : 
	
			int ans(int area, int breadth)
			{
				rec = area*breadth;
				return rec;
			}
			
			float ans(float c, int area, int breadth)
			{
				tri = c*area*breadth;
				return tri;
			}	
			
			float ans( int area)
			{
				cir = 3.14*area*area;
				return cir;
			}					
};

main()
{
	int rec;
	float cir,tri;
	Answer a;
	
	rec = a.ans(20,30);
	tri = a.ans(0.5,10,20);
	cir = a.ans(3.14,10);
	
	cout<<"\n\n\t Reactangle : "<<rec;
	cout<<"\n\n\t Triangle : "<<tri;
	cout<<"\n\n\t CIrcle : "<<cir;
}
