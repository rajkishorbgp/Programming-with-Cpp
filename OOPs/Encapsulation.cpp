#include <iostream>
using namespace std;

class Student // encapsulation
{
public:
    string name = "Raj kishor";
    string height = "5.11Ffit";

private:
    int age = 20;

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    Student rk;
    cout << "Name: " << rk.name << endl;
    cout << "Height" << rk.height << endl;
    cout << "Age: " << rk.getAge();
    return 0;
}
/*
   Output:
   Name: Raj kishor
   Height5.11Ffit
   Age: 20
*/