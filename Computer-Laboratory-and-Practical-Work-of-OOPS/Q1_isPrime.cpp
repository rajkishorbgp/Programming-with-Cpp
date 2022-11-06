/*
                    Program: 1
        Write a C++ program to print if the number is prime or not.
*/

#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter any the number: ";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (n == i)
    {
        cout << "Number is prime.";
    }
    else
    {
        cout << "Number is not prime.";
    }
}

/*
    Output:
    Enter any the number: 11
    Number is prime.

*/