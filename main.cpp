/******************************************************************************

Welcome to our Programming II Group Assignment source code

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Student
{
    protected: //Protected for using data members between classes
        string name, studentID;
    public:
        Student() //The constructor here uses default values for strings which is blank when the object is created
        {
            name = ""; 
            studentID = "";
        }
        void setName(string n){ //Setter method for name
            name = n;
        }
        void setID(string id){ //setter method for studentID
            studentID = id;
        }
        string getName(){ //getter for name
            return name;
        }
        string getID(){ //getter for studentID
            return studentID;
        }
        virtual ~Student(){ //destructor to show Student lifecycle
            cout<<endl<<"[Student object destroyed]";
        }
        virtual void displayInfo() = 0; //pure virtual function to show abstract base class
};

class GradeBook: public Student //GradeBook publicly inherits 
{
    float quiz1, quiz2, quiz3;
    public:
        GradeBook(float q1, float q2, float q3):Student(){
            quiz1 = q1;
            quiz2 = q2;
            quiz3 = q3;
        }
        ~GradeBook(){
            cout<<endl<<"[GradeBook object destroyed]";
        }
        float calculateAverage(){
            return (quiz1+quiz2+quiz3)/3;
        }
        void displayInfo(){
            cout<<fixed<<setprecision(2);
            cout<<<<endl"--Student Info--"<<endl;
            cout<<"Student name: "<<getName()<<endl;
            cout<<"Student ID: "<<getID()<<endl;
            cout<<"Quiz Scores: "<<quiz1<<", "<<quiz2<<", "<<quiz3<<endl;;
            cout<<"Average Score: "<<calculateAverage();
        }
    
};

int main()
{
    string name, id;
    float q1, q2, q3;
    cout<<"Enter student's name: ";
    getline(cin, name);
    cout<<"Enter student ID: ";
    getline(cin,id);
    cout<<"Enter 3 quiz scores (seperate with space): ";
    cin>>q1>>q2>>q3;
    GradeBook gb(q1, q2, q3);
    gb.setName(name);
    gb.setID(id);
    gb.displayInfo();
    

    return 0;
}
