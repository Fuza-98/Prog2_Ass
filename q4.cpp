/******************************************************************************
Macam nak gigit bos do mmmmmmmMMMMM~~
*******************************************************************************/

#include <iostream>     // For input and output
#include <string>       // For using string class
#include <fstream>      // For file handling

using namespace std;

// Define a class named Student
class Student {
private:
    // Private member variables
    string name;
    string id;
    float quiz1, quiz2, quiz3;

public:
    // Function to input student data from user
    void inputData() {
        cout << "Enter student name: ";
        getline(cin, name); // Read full name including spaces

        cout << "Enter student ID: ";
        getline(cin, id);   // Read full ID string

        cout << "Enter 3 quiz scores: ";
        cin >> quiz1 >> quiz2 >> quiz3; // Input three quiz scores
    }

    // Function to save student data to a file
    void saveToFile() {
        ofstream file("student.txt"); // Create and open file for writing
        if (file.is_open()) {
            // Write student data to file
            file << "Student's name: " << name << endl;
            file << "Student's ID: " << id << endl;
            file << "Quiz Scores:\n"
                 << "Quiz 1: " << quiz1 << endl
                 << "Quiz 2: " << quiz2 << endl
                 << "Quiz 3: " << quiz3 << endl;
            file.close(); // Close the file after writing
            cout << "\nData saved to file." << endl;
        } else {
            // Display error if file cannot be opened
            cout << "\nError opening file!" << endl;
        }
    }
    
    // Function to read data from file and display on console
    void readAndDisplay() {
        string text;
        cout << "\nReading from file..." << endl;
        ifstream readFile("student.txt"); // Open file for reading
        while (getline(readFile, text)) {
            cout << text << endl; // Display each line from file
        }
        readFile.close(); // Close the file after reading
    }
};

int main()
{
    Student stud; 
    stud.inputData();      // Input student data
    stud.saveToFile();     // Save data to file
    
    Student s1;
    s1.readAndDisplay();   // Read data from file and display

    return 0; // End of program
}
