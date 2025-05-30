/******************************************************************************

Welcome to our Programming II Group Assignment source code. Comments banyak tak siap
lg so kalau rajn sesiapa boleh lah add comment kt part orang lain huehue

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
//Question 1
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

class GradeBook: public Student //GradeBook publicly inherits from Student
{
    float quiz1, quiz2, quiz3; //Declare three float variables as final answer will be in float value
    public:
        GradeBook(float q1, float q2, float q3):Student(){ //GradeBook constructor will initialze 3 float values and the default values from Student constructor
            quiz1 = q1;
            quiz2 = q2;
            quiz3 = q3;
        }
        ~GradeBook(){ //Destructor to show lifetime of object after it exits its scope
            cout<<endl<<"[GradeBook object destroyed]";
        }
        float calculateAverage(){ //Function to calculate average for the float values
            return (quiz1+quiz2+quiz3)/3;
        }
        void displayInfo(){ //Print function to display all necessary information after getting input from user
            cout<<fixed<<setprecision(2); /*precision is set to 2 to show 2 decimal places and fixed so that it will be fixed
                                            to show all floating point values during cout*/
            cout<<endl<<"--Student Info--"<<endl;
            cout<<left<<setw(20)<<"Student name: "<<getName()<<endl;
            cout<<setw(20)<<"Student ID: "<<getID()<<endl;
            cout<<setw(20)<<"Quiz Scores: "<<quiz1<<", "<<quiz2<<", "<<quiz3<<endl;;
            cout<<setw(20)<<"Average Score: "<<calculateAverage();
        }
    
};

int main()
{
    string name, id; //Declare string variables for getting input
    float q1, q2, q3; //Declare float values to get from user
    cout<<"Enter student's name: ";
    getline(cin, name); //Uses getline so that adding a whitespace doesn't terminate the cin operation and cause stream buffer issues
    cout<<"Enter student ID: ";
    getline(cin,id);
    cout<<"Enter 3 quiz scores (seperate with space): ";
    cin>>q1>>q2>>q3; //Get float values from user (with space as a delimiter for each variable
    GradeBook gb(q1, q2, q3); //Initialize GradeBook object with float values
    gb.setName(name); //Call setName() function to make sure a new string value is set so that it doesn't use the default value of the Student constructor
    gb.setID(id);
    gb.displayInfo(); //Display all necessary information with neat formatting
    

    return 0;
}
