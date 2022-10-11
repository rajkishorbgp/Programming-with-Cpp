/*
        multi level inheritance
*/
#include <iostream>
using namespace std;

class Animal
{
public:
    int age = 2;
    int weight;
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    string clore = "Black";
};

class Cat : public Dog
{
public:
    int hight = 3;
};

int main()
{
    Cat baby;
    cout << baby.age << endl;
    cout << baby.clore << endl;
    cout << baby.hight << endl;

    return 0;
}

/*
    Output:
    2
    Black
    3
*/