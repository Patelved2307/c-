// Multilevel Inheritance
//Write a program to create a base class Person with attributes name and age. Derive a class Student that adds roll number and marks. Display all the details.
#include<iostream>
#include<string>
using namespace std;

// base class
class person
{
    public:
    string name;
    int age;

    public:
    void getpersondetails()
    {
        cout<< "Enter the student name";
        cin >> name;
        cout <<"Enter the age of the student ";
        cin>> age;
    }
    void displaypersondetails()
    {
        cout << "name of the srtudent :" << name << endl;
        cout << "age of the student :" << age << endl;
    }
};

// derived class
class student : public person
{
    public :
    int rollnumber;
    float marks;

    public:
    void getstudentdetails()
    {
       getpersondetails(); // base call 
        cout << "Enter the roll number of the student";
        cin >> rollnumber;
        cout<< "enter the marks of the student ";
        cin >> marks;
    }
    void displaystudentdetails()
    {
        displaypersondetails(); //base call
        cout << "Roll number of the student:" << rollnumber << endl;
        cout << "Marks of the student :" << marks << endl;
    }
};

int main()
{
    student s;
    cout << "student details : \n " ;
    s.getstudentdetails();

    cout << "student information : \n";
    s.displaystudentdetails();

    return 0;
}