//Write a program to show how constructors are called in single inheritance when both base and derived classes have constructors.
#include<iostream>
using namespace std;

class Base 
{
    public :
        Base()
        {
            cout << "Base class of the constructor." << endl;
        }
};

class Derived : public Base
{
    public :
        Derived()
        {
            cout << "Derived class of the constructor." << endl;
        }
};

int main()
{
    // creating a object for derived class 
    Derived abj;
    return 0;
}