/*
               Program: 2
        Write a C++ program to print if the number is palindrome or not.
*/

#include <iostream>
using namespace std;
int main()
{
    int n, a, r, rev;
    rev = 0;
    cout << "Enter the any number: ";
    cin >> n;
    a = n;
    while (n)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (a == rev)
    {
        cout << "Number is pallindrome.";
    }
    else
    {
        cout << "Number is not pallindrome.";
    }
}

/*

    Output:
    Enter the any number: 1551
    Number is pallindrome
*/