#include <iostream>
using namespace std;

class A
{
public:
    int a = 5;
    A()
    {
        cout << "Class A constructor call." << endl;
    }
    virtual void display()
    {
        cout << "a= " << a << endl;
    }
};

class C
{
public:
    int c = 15;
    C()
    {
        cout << "Class C constructor call." << endl;
    }
    void display()
    {
        cout << "c= " << c << endl;
    }
};

class B : public C, public A
{
public:
    int b = 10;
    B()
    {
        cout << "Class B constructor call." << endl;
    }
    void display()
    {
        cout << "b= " << b << endl;
    }
};

int main()
{
    B b1;
    A *a1;
    C *c1;
    a1 = &b1;
    a1->display(); // call class B function

    c1 = &b1;
    c1->display(); // call class C function

    return 0;
}

/*
    Output:
    Class C constructor call.
    Class A constructor call.
    Class B constructor call.
    b= 10
    c= 15
 */