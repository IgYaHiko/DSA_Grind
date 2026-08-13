#include <iostream>
#include <string>
using namespace std;
struct Student {
    string name;
    int roll_no;
    string hostel;
    double cgpa;

    void addDetails() {
        // name;
        cout << "Enter your Name: ";
        cin >> name;
        // roll no
        cout << "Enter your roll_no: ";
        cin >> roll_no;
        // hostel
        cout << "Enter your hostel: ";
        cin >> hostel;
        // cgpa
        cout << "Enter your cgpa: ";
        cin >> cgpa;


    }
    void showDetails() {
        cout << "\n Student Details: " << endl;
        cout << "Student Name: " << name << endl;
        cout << "Student roll_no: " << roll_no << endl;
        cout << "Student hostel: " << hostel << endl;
        cout << "Student cgpa: " << cgpa << endl;
    }

    void updateDetails() {
    cout << "Enter new name: ";
    cin >> name;

    cout << "Enter new roll_no: ";
    cin >> roll_no;

    cout << "Enter new hostel: ";
    cin >> hostel;

    cout << "Enter new cgpa: ";
    cin >> cgpa;
}
   void deleteDetails() {
        name = "";
        roll_no = 0;
        hostel = "";
        cgpa = 0.0;
   }
};
int main() {
    Student s1;
    s1.addDetails();
    s1.showDetails();
    s1.updateDetails();
    cout << "show new data :" << endl; 
    s1.showDetails();
    cout << "now delete data ->  " << endl;
    s1.deleteDetails();
    cout << "no data ->" << endl;
    s1.showDetails();
    return 0;
}