#include <iostream>
#include <string>
using namespace std;

class Employee {

	    string name;
	    int emp_id;
	    double salary;
		
		public:
			
		    Employee(string n, int i, double s) {
		        name = n;
		        emp_id = i;
		        salary = s;
		    }
		    
		    void setSalary(int performance) {
		        if (performance >= 1 && performance <= 10) 
				{
		            salary += (500 * performance);
		            cout << "\n\n\t Employee's new salary after rating is : " << salary;
		        } 
				else 
				{
		            cout << "\n\n\t Please enter performance rating between 1 and 10.";
		        }
		    }
};

main() {
    string name;
    int emp_id;
    double salary;
    int performance;

    cout << "\n\n\t Please enter Name: ";
    cin >> name;

    cout << "\n\n\t Please enter Employee Id: ";
    cin >> emp_id;

    cout << "\n\n\t Please enter Salary: ";
    cin >> salary;

    Employee e(name, emp_id, salary);

    cout << "\n\n\t Rate Performance Of Employee (1-10): ";
    cin >> performance;

    e.setSalary(performance);
}

