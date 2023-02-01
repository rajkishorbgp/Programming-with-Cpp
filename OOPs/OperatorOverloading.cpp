#include <iostream>
using namespace std;
class A
{
private:
    int x;

public:
    void setX(int x)
    {
        this->x = x;
    }
    int getX()
    {
        return x;
    }
    A operator+(A a)
    {
        A temp;
        temp.x = this->x + a.x;
        return temp;
    }
};

int main()
{
    A a1, a2, a3;
    a1.setX(5);
    a2.setX(10);

    cout << "a3: " << a3.getX() << endl; // garvage balur

    // a3 = a1.operator+(a2);
    a3 = a1 + a2; //  5+10

    cout << "a3: " << a3.getX() << endl;

    return 0;
}

/*
    Output:
    a3: 4201088
    a3: 15
*/