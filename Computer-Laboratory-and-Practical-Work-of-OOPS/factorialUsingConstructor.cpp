/*
    Write a code to compute factorial of a number using constructor.
    Also show the use of destructor in it.
*/

#include <iostream>
using namespace std;
class Number
{
public:
    int no;

    Number(int no) // Constructor
    {
        this->no = no;
    }
    int factorial() // function
    {
        int fact = 1;
        for (int i = 2; i <= no; i++)
        {
            fact = fact * i;
        }
        return fact;
    }
    ~Number() // Destructor
    {
        cout << "Number is Destroy" << endl;
    }
};

int main()
{
    Number n1(6); // Create object

    cout << "Factorial : " << n1.factorial() << endl;

    return 0;
}

/*
    Output:
    Factorial : 720
    Number is Destroy
*/