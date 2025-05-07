//hello this is question 2 by s3ng and aisar
enjoy our journey

#include <iostream>
#include <iomanip>
using namespace std;

// Define a structure to store employee details
struct Details {
    int empID;
    string empName;
    double empSal, empAll, deduction, netsalary;
};

int main() {
    Details employees[3]; // Array to store data for 3 employees

    // Input loop for 3 employees
    for (int i = 0; i < 3; i++) {
        // Prompt for employee ID
        cout << "Enter Employee ID: ";
        cin >> employees[i].empID;
        cin.ignore(); // Clear the newline character from the input buffer

        // Prompt for employee name
        cout << "Enter Name: ";
        getline(cin, employees[i].empName);

        // Prompt for basic salary
        cout << "Enter Basic Salary: ";
        cin >> employees[i].empSal;

        // Prompt for allowance
        cout << "Enter Allowance: ";
        cin >> employees[i].empAll;

        // Prompt for deductions
        cout << "Enter Deductions: ";
        cin >> employees[i].deduction;
        cout << endl;

        // Calculate net salary
        employees[i].netsalary = employees[i].empSal + employees[i].empAll - employees[i].deduction;
        cout << endl;
    }

    // Print table header with appropriate formatting
    cout << left << setw(20) << "Name"
         << setw(12) << "ID"
         << right << setw(15) << "Basic Salary"
         << setw(15) << "Net Salary" << endl;
    cout << string(62, '-') << endl;

    // Output loop to display each employee's formatted data
    for (int i = 0; i < 3; i++) {
        cout << showbase << hex; // Display ID in hexadecimal with base (e.g., 0x65)
        cout << setw(12) << left << employees[i].empID; // Left-aligned ID
        cout << " | ";

        cout << setw(20) << left << employees[i].empName; // Left-aligned name
        cout << " | ";

        cout << right << fixed << setprecision(2) << setw(12) << employees[i].empSal; // Right-aligned basic salary
        cout << " | ";

        cout << right << fixed << setprecision(2) << setw(12) << employees[i].netsalary; // Right-aligned net salary
        cout << " |" << endl;
    }

    
}
