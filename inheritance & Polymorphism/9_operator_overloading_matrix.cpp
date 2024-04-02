/*

9. Write a Program of Two 1D Matrix Addition using Operator Overloading

*/

#include <iostream>
using namespace std;

class Matrix
{
	int array[10][10];
	
	public : 
			void get_data()
			{
				for(int i=0;i<3;i++)
				{
					for (int j=0;j<3;j++)
					{
						cout<<"\n\t Enter Value Of ["<<i<<"]["<<j<<"] : ";
						cin>>array[i][j];	
					}
					cout<<"\n";	
				}	
			}
			
			void print_data()
			{
				cout<<"\n\n";
				for(int i=0;i<3;i++)
				{
					for(int j=0;j<3;j++)
					{
						cout<<array[i][j]<<" ";
					}
					cout<<"\n";
				}
			}
			
			Matrix operator + (Matrix &obj)
			{
				Matrix answer;
				
				for(int i=0;i<3;i++)
				{
					for(int j=0;j<3;j++)
					{
						answer.array[i][j]=array[i][j]+obj.array[i][j];
					}
				}
				return answer;
			}
};
main()
{
	Matrix m,b, s;
	
	m.get_data();	
	b.get_data();	
	
	s = m+b;
	m.print_data();
	b.print_data();
	s.print_data();
}
