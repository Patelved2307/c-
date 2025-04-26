// Create a base class Shape with a function area(). Derive a class Rectangle and override the area() function.
#include<iostream>
using namespace std;

class shape
{
    public:
    virtual void area()
    {
        cout << "area of shape is undifined " << endl;
    }
};

class rectangle : public shape
{
    private :
    float length, width;

    public:
    void getdata()
    {
        cout << "enter the length and width of rectangle :";
        cin >> length >> width;
    }
    void area() override // override the base class 
    {
        cout << "area of the rectangle :" << length * width << endl;
    }
};

int main()
{
    rectangle r;
    r.getdata();   // input of length and width
    r.area();      // call the overide base 

return 0;
}