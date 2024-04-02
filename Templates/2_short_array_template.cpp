	// 2. Write a program of to sort the array using templates
	
	#include <iostream>
	using namespace std;
	
	template <class T>
	class Array
	{
		int size;
		T arr[50]; 
		public :
				void get_data();
				void sort_data();
				void put_data();	
	};
	
	template <class T>
	void Array<T> :: get_data()
	{
		cout<<"\n\n\t How Many Number You Want To store : ";
		cin>>size;
		
		for (int i=0;i<size;i++)
		{
			cout<<"\n\n\t Enter Number ["<<i+1<<"] : ";
			cin>>arr[i];	
		}	
	}
	template <class T>
	void Array<T>:: sort_data()
	{
		T i,j;
		for(i=0;i<size;i++)
		{
			for(j=i+1;j<size;j++)
			{
				if(arr[i]>arr[j])
				{
					T temp;
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	template <class T>
	void Array <T>:: put_data()
	{
		for(int i=0;i<size;i++)
		{
			cout<<"\n\n\t"<<arr[i];	
		}	
	}
	main()
	{
		Array <int>a;
		a.get_data();
		a.sort_data();
		a.put_data();
	}
