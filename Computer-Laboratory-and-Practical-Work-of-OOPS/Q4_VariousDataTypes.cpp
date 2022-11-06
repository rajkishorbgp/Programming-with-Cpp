/*
            program: 4
    Write a program in C++ to find the size of various datatypes.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    cout << "Size of long long int " << sizeof(long long int) << " bytes " << endl;
    cout << "Size of long long " << sizeof(long long) << " bytes" << endl;

    return 0;
}

/*
    Output:
    Size of char: 1 byte
    Size of int: 4 bytes
    Size of float: 4 bytes
    Size of double: 8 bytes
    Size of long: 4 bytes
    Size of long long int 8 bytes
    Size of long long 8 bytes
*/