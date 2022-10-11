/*
    multiple level inheritance
*/
#include <iostream>
using namespace std;

class Animal
{
public:
    int age = 2;
    int weight;
    void bark()
    {
        cout << "Barking" << endl;
    }
};

class Human
{
public:
    string clore = "Black";
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

// Multiple Inheritance
class Hybrid : public Animal, public Human
{
};

int main()
{
    Hybrid h1;
    h1.speak();
    cout << h1.clore << endl;
    h1.bark();

    return 0;
}

/*
    Output:
    Speaking
    Black
    Barking
*/