/******************************************************************************

Macam nak gigit bos do mmmmmmmMMMMM~~

*******************************************************************************/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Student {
private:
    string name;
    string id;
    float quiz1, quiz2, quiz3;

public:
    void inputData() {
        cout<<"Enter student name: ";
        getline(cin, name);

        cout<<"Enter student ID: ";
        getline(cin, id);

        cout<<"Enter 3 quiz scores: ";
        cin>>quiz1>>quiz2>>quiz3;
    }

    void saveToFile() {
        ofstream file("student.txt");
        if (file.is_open()) {
            file<<"Student's name: "<<name<<endl;
            file<<"Student's ID: "<<id<<endl;
            file<<"Quiz Scores:\n"<<"Quiz 1: "<<quiz1<<endl<<"Quiz 2: "<<quiz2<<endl<<"Quiz 3: "<<quiz3<<endl;
            file.close();
            cout<<"Data saved to file."<<endl;
        } else {
            cout<<"Error opening file!"<<endl;
        }
    }
};

int main()
{
    Student stud;
    stud.inputData();
    stud.saveToFile();

    return 0;
}