/*

5. Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the 
marks obtained in two subjects and class result contains the total marks 
obtained in the test. The class result can inherit the details of the marks 
obtained in the test and roll number of students. (Multilevel Inheritance)

*/

#include <iostream>
using namespace std;

class Student
{
	
		public:
			int roll_no;
			void get_roll()
			{
				cout<<"\n\n\t Please Enter Roll No : ";
				cin>>roll_no;
			}
			void print_roll()
			{
				cout<<"\n\n\t Roll No : "<<roll_no;
			}
			
};
class Test : public Student
{	
public:
	int mark[2],total;
	void get_mark()
			{
				for (int i=0;i<2;i++)
				{
					cout<<"\n\n\t Please Enter mark ["<<i+1<<"] : ";
					cin>>mark[i];
					total += mark[i];
				}
			}
			void print_mark()
			{
				for (int i=0;i<2;i++)
				{
					cout<<"\n\n\t mark ["<<i+1<<"] : "<<mark[i];
				}
			}
	
};

class Result : public Test
{
public:

			void print_total()
			{
				cout<<"\n\n\t Roll No : "<<roll_no;
				cout<<"\n\n\t Mark 1 : "<<mark[0];
				cout<<"\n\n\t Mark 2 : "<<mark[1];
				cout<<"\n\n\t Total : "<<total;
			}
	
};

int main()
{
	Result r;
	r.get_roll();
	r.get_mark();
	r.print_total();
}
