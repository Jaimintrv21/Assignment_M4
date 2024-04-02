/*

8. Write a C++ program to implement a class called Student that has private 
    member variables for name, class, roll number, and marks. Include 
    member functions to calculate the grade based on the marks and display 
    the student's information. Accept address from each student implement 
    using of aggregation

*/

#include<iostream>
using namespace std;

class Student
{
    private:
        string name,address,grade;
        float per;
        int roll_no, student_class, mark[5], i, total;
    public:
        Student()
        {
            total = 0;
        }
        void get_data()
        {
            cout<<"\n\n\t Please Enter Name : ";
            cin>>name;

            cout<<"\n\n\t Please Enter Roll No. : ";
            cin>>roll_no;

            cout<<"\n\n\t Please Enter Class : ";
            cin>>student_class;

            for ( i = 0; i < 5; i++)
            {
                cout<<"\n\n\t Please Marks Of subject ["<<i+1<<"] : ";
                cin>>mark[i];
                total += mark[i];
            }

            cout<<"\n\n\t Please Enter Your Address : ";
            cin>>address;
        }

        void grad()
        {
            per = total/5;
            
            if (per >= 80)
                grade = 'A';
                
            else if (per >= 60)
                grade = 'B';
                
            else if (per >= 40)
                grade = 'C';
                
            else
                grade = 'D';
                
        }

        void print_data()
        {
            cout<<"\n\n\t Name : "<<name;
            cout<<"\n\n\t Roll No : "<<roll_no;
            cout<<"\n\n\t Class : "<<student_class;
            cout<<"\n\n\t Total Marks : "<<total;
            cout<<"\n\n\t Percentage : "<<per;
            cout<<"\n\n\t Grade : "<<grade;
            cout<<"\n\n\t Address : "<<address;
        }  
};

int main()
{
    Student s;
    s.get_data();
    s.grad();
    s.print_data();
    return 0;
}

