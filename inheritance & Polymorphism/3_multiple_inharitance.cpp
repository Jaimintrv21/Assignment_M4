/*

3.  Create a class person having members name and age. Derive a class student 
	having member percentage. Derive another class teacher having member 
	salary. Write necessary member function to initialize, read and write data. 
	Write also Main function (Multiple Inheritance)

*/

#include<iostream>
using namespace std;

class person
{
	string name;
	int age;
	
	public : 
			void get_stud_info()
			{
				cout<<"\n\n\t Please Enter Name : ";
				cin>>name;
				
				cout<<"\n\n\t Please Enter Age : ";
				cin>>age;
			}
			
			void print_stud_info()
			{
				cout<<"\n\n\t Name :"<<name;
				cout<<"\n\n\t Age :"<<age;
			}
};

class student : public person
{
	int mark[5],per,total;
	
	public : 
			void get_mark()
			{
				for (int i=0;i<5;i++)
				{
					cout<<"\n\n\t Enter Marks of ["<<i+1<<"] : ";
					cin>>mark[i];
					total += mark[i];					
				}	
			}
			
			void print_per()
			{
				per = total/5;
				cout<<"\n\n\t Total Marks :"<<total;
				cout<<"\n\n\t Percentage : "<<per;
			}
};

class teacher : public student
{
	int salary;
	
	public :
			void get_salary()
			{
				cout<<"\n\n\t Enter Salary Of Teacher : ";
				cin>>salary;
			}
			void print_salary()
			{
				cout<<"\n\n\t Teacher Salary : "<<salary;
			}
};



main()
{	
	teacher t;
	
	t.get_stud_info();
	t.get_mark();
	t.get_salary();
	t.print_stud_info();
	t.print_per();
	t.print_salary();
}
