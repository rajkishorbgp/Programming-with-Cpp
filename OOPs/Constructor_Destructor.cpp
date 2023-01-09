#include <iostream>
using namespace std;

class Student
{

    string name;
    int rollNo;

public:
    // Constructor create
    Student()
    {
        cout << "Constructor called..." << endl;
    }
    // Destructor create
    ~Student()
    {
        cout << "Destructor called..." << endl;
    }
};

int main()
{
    // static
    Student s1;

    // dynamic
    Student *s2 = new Student();

    Student *s3 = new Student;
    // manually destructor call

    return 0;
}

/*
    Output:
    Constructor called...
    Constructor called...
    Constructor called...
    Destructor called...
*/