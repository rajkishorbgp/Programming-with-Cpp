/*
    Write a program in C++ to find the volume of two boxes using parametrised constructor
        (outside class). (1 constructor is to be used).
*/

#include <iostream>
using namespace std;

class Box
{
public:
    int length;
    int width;
    int height;

    // Constructor declaration
    Box(int, int, int);

    // function declaration
    int volume();
};

// Constructor definition
Box::Box(int length, int width, int height)
{
    this->length = length;
    this->width = width;
    this->height = height;
}

// function defination
int Box::volume()
{
    return length * width * height;
}

int main()
{
    Box b1(6, 4, 2);

    Box b2(2, 3, 6);

    cout << "volume of box1: " << b1.volume() << endl;
    cout << "volume of box2: " << b2.volume() << endl;

    return 0;
}

/*
  Output:
  volume of box1: 48
  volume of box2: 36
*/