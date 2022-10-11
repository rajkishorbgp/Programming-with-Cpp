/*
        Single level inheritance
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

int main()
{
    Dog baby;
    cout << baby.age << endl;
    cout << baby.clore << endl;

    return 0;
}

/*
    Output:
    2
    Black
*/