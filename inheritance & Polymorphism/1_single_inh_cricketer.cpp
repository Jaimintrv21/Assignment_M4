#include<iostream>
using namespace std;

class cricketer {
protected: 
    string name;
    int matches, run[100], total;

public:
    void get_data() {
        cout << "\n\n\t Please Enter Name : ";
        cin >> name;

        cout << "\n\n\t Please Enter Total Matches : ";
        cin >> matches;

        total = 0; 
        for (int i = 0; i < matches; i++) {
            cout << "\n\n\t Please Enter Run Of Match [" << i+1 << "] : ";
            cin >> run[i];
            total += run[i];
        }
    }
};

class batsman : public cricketer {
private:
    int average, best_p;

public:
    batsman() {
        best_p = 0; 
    }

    void best_per() {
        for (int i = 0; i < matches; i++) {
            if (best_p < run[i]) {
                best_p = run[i];
            }
        }
    }

    void print_data() {
        get_data(); 
        cout << "\n\n\t Name : " << name;
        cout << "\n\n\t Matches : " << matches;
        cout << "\n\n\t Total Run : " << total;
        
        average = total / matches;
        
        cout << "\n\n\t Average Run : " << average;
        best_per();
        cout << "\n\n\t Best Performance : " << best_p;
    }
};

int main() {
    batsman b;
    b.print_data();
    return 0;
}

