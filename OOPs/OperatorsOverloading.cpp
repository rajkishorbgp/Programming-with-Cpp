#include <iostream>
using namespace std;

class Raj
{
public:
    int a;
    void operator+(Raj &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output: " << value1 - value2 << endl;
    }
};

int main()
{
    Raj obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;

    return 0;
}

/*
    Output:
    Output: -3
*/