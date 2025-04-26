//Create a class Person, derive Employee from it, and then derive Manager from Employee. Each should have their own display function.
#include<iostream>
#include<string.h>
using namespace std;

// father class
class person
{
    public :
    string name;
    int age;

    public :
    
        void getpersondata()
        {
            cout << "Enter the name :";
            cin >> name;
            cout << "Enter the age :";
            cin >> age;
        }

        void displaypersondata()
        {
            cout << "Name :" << name << endl;
            cout << "Age :" << age << endl;
        }
};

// derived class of the employee
// child class
class Employee : public person
{
    public :
    int empID;
    string department;

    public :
    void getemployeedata()
    {
        getpersondata();    //call the base function
        cout << "Enter the employee ID :";
        cin >> empID;
        cout << "Enter the Department of the employee :";
        cin >> department;
    }
    void displayemployeedata()
    {
        displaypersondata();
        cout << "empID :" << empID << endl;
        cout << "Department :" << department << endl;
    }
};

// derived class of the manager 
// grand child class
class Manager : public Employee
{
    public :
    string role;
    int teamsize;

    public :
    void getmanagerdata()
    {
        getemployeedata();
        cout << "Enter the role :" ;
        cin >> role;
        cout << "Enter the team size :" ;
        cin >> teamsize;
    }
    void displaymanagerdata()
    {
        displayemployeedata();
        cout << "Role :" << role << endl;
        cout << "Team Size :" << teamsize << endl;
    }
};

int main()
{
    Manager m;
    cout << "--- Manager Details ---" << endl;
    m.getmanagerdata();

    cout << "--- Mnagaer details ---" << endl;
    m.displaymanagerdata();

    return 0;
    
}
