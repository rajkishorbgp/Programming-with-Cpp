/*
        Program: 3
    Write a C++ program to find prime number for given list.
*/

#include <iostream>
using namespace std;
int main()
{
    int list[100], n, i, size, j;
    cout << "How many eiters the number: ";
    cin >> size;
    cout << "Enter the " << size << "th no : ";
    for (i = 0; i < size; i++)
    {
        cin >> list[i];
    }
    cout << "Prime number list." << endl;
    for (i = 0; i < size; i++)
    {
        n = list[i];
        for (j = 2; j < n; j++)
        {
            if (n % j == 0)
            {
                break;
            }
        }
        if (n == j)
        {
            cout << n << " ";
        }
    }
}

/*
    Output:
    How many eiters the number: 8
    Enter the 8th no : 1 2 3 4 5 6 7 8
    Prime number list.
    2 3 5 7
*/