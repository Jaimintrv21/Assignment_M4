/*
10. Write a program to concatenate the two strings using Operator Overloading
*/

#include <iostream>
using namespace std;

class String
{
	string str;
	public : 
			void get_string()
			{
				cout<<"\n\n\t Please Enter String : ";
				cin>>str;	
			}	
			
			void print_string()
			{
				cout<<"\n\n\t"<<str;
			}
			
			String operator+(String &obj)
			{
				String st;
				
				st.str=str+obj.str;
				
				return st;
			}
};
main()
{
	String s,m,t;
	
	s.get_string();
	m.get_string();
	
	t=s+m;
	t.print_string();
}
