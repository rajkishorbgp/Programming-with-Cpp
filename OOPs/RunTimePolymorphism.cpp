#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    Dog baby;
    baby.speak();
    return 0;
}

/*
    Output:
    Barking
*/