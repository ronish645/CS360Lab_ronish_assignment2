#include <iostream>
using std::cout;
using std::cin;

#define MAX 10

class student {
private:
    char name[30];
    int courseNum;
    int total;
    float perc;
public:
    void getDetails(void); //member function to get student's details
    void putDetails(void); //member function to print student's details
};

void student::getDetails(void) {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter course number: ";
    cin >> courseNum;
    cout << "Enter total grades out of 500: ";
    cin >> total;
    perc = (float)total / 500 * 100;
}

void student::putDetails(void) {
    cout << "Student details:\n";
    cout << "Name:" << name << ", Course Number:" << courseNum << ", Total:" << total << ", Percentage:" << perc << "%\n";
}

int main(void) {
    student std[MAX]; // Array of objects creation
    int n; // Variable to store the total number of students

    // Asking for the total number of students
    cout << "Enter total number of students: ";
    cin >> n;

    // Validating the total number of students does not exceed MAX
    if (n > MAX) {
        cout << "The maximum number of students is " << MAX << ". Please enter a valid number of students.\n";
        return 1; // Return with error code
    }

    // Reading details of each student
    for(int i = 0; i < n; i++) {
        cout << "Enter details of student " << (i + 1) << ":\n";
        std[i].getDetails();
    }

    cout << "\n";

    // Displaying details of each student
    for(int i = 0; i < n; i++) {
        cout << "Details of student " << (i + 1) << ":\n";
        std[i].putDetails();
        cout << "\n";
    }

    return 0;
}
