#include <iostream>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "I am raj" << endl;
    }
    void func(string name)
    {
        cout << "Hello " << name << endl;
    }
};

int main()
{
    A object;
    object.func();
    object.func("Raj kishor");

    return 0;
}

/*
    Output:
    I am raj
    Hello Raj kishor
*/