/*

4. Write a C++ Program display Student Mark sheet using Multiple inheritance

*/

#include <iostream>
using namespace std;

class student
{
	protected :
				string name;
				int age,roll_no;
				
	public :
			void get_stud_info()
			{
				cout<<"\n\n\t Please Enter Name : ";
				cin>>name;	
				
				cout<<"\n\n\t Please Enter Roll No : ";
				cin>>roll_no;
				
				cout<<"\n\n\t Please Enter Age : ";
				cin>>age;
			}
			
			void print_stud_info()
			{
				cout<<"\n\n\t Name : "<<name;	
				
				cout<<"\n\n\t Roll No : "<<roll_no;
				
				cout<<"\n\n\t Age : "<<age;
			}	
};

class mark_entry : public student
{
	protected :
				int mark[5],total,per;
				
	public :
			void enter_mark()
			{
				for (int i=0;i<5;i++)
				{
					cout<<"\n\n\t Please Enter Marks ["<<i+1<<"] : ";
					cin>>mark[i];
					total += mark[i];
				}
			}
			
			void print_total_and_per()
			{
				cout<<"\n\n\t Total Marks : "<<total;				
				cout<<"\n\n\t Percentage : "<<total/5;
			}
				
	
};

class marksheet : public mark_entry
{
	int status;
	public :
			void pass_or_fail()
			{
				for (int i=0; i<5;i++)
				{
					if(mark[i] < 33)					
						status = 0;					
					else
						status = 1;					
				}
				
				if(status != 0)
					cout<<"\n\n\t Pass";
				else
					cout<<"\n\n\t Fail";
			}
			
			
			void grade()
			{
				if(status != 0)
				{
					if (per >= 85 && per <= 100)
			        	cout << "\n\n\t Grade : A+";
				    else if (per >= 70 && per < 85)
				        cout << "\n\n\t Grade : A";
				    else if (per >= 65 && per < 70)
				        cout << "\n\n\t Grade : B";
				    else if (per >= 50 && per < 65)
				        cout << "\n\n\t Grade : C";
				    else if (per >= 35 && per < 50)
				        cout << "\n\n\t Grade : D";
				    else
				        cout << "\n\n\t You Have Failed, Can't Assign Any Grade";
				}
			}
};

main()
{
	marksheet m;
	
	m.get_stud_info();
	m.enter_mark();
	m.print_stud_info();
	m.print_total_and_per();
	m.pass_or_fail();
	m.grade();
}
