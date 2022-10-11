#include <iostream>
using namespace std;

class Human
{
public:
    int height = 6;
    int weight = 72;
    int age = 20;
};

// inheritance Human Class
class Male : public Human
{
public:
    string color = "Black";
    void sleep()
    {
        cout << "Male Sleeping..." << endl;
    }
};

int main()
{
    Male m1;
    cout << m1.height << endl;
    cout << m1.weight << endl;
    cout << m1.age << endl;
    cout << m1.color << endl;
    m1.sleep();

    return 0;
}

/*

   Output:
   6
   72
   20
   Black
   Male Sleeping...

*/