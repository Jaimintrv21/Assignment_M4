/*
7. Write a C++ program to implement a class called Date that has private 
    member variables for day, month, and year. Include member functions to 
    set and get these variables, as well as to validate if the date is valid.

*/
#include<iostream>
using namespace std;
class Date
{
private:
    int day,month,year;
public:
    void get_data()
    {
        cout<<"\n\n\t Please Enter Date : ";
        cin>>day;

        cout<<"\n\n\t Please Enter Month : ";
        cin>>month;

        cout<<"\n\n\t Please Enter Year : ";
        cin>>year;
    }

    void print_data()
    {
        if (day < 1 || day > 31 )
        {
            cout<<"\n\n\t Invalid ! please Enter Valid Day";
        }
        else if ( month < 1 || month > 12 )
        {
        	cout<<"\n\n\t Invalid ! please Enter Valid Month";
		}
        else
        {
            cout<<"\n\t Day : "<<day;
            cout<<"\n\t Month : "<<month;
            cout<<"\n\t Year : "<<year;

        }      
    }
   
};


int main()
{
    Date d;
    d.get_data();
    d.print_data();
    return 0;
}

