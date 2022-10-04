#include<iostream>
using namespace std;

void printbits(int value)
{
    for (int i = 31; i >= 0; i--)
    {
        cout<<((value >> i) & 1);
    }
    cout<<endl;
}

int main()
{
    int num = 10;
    unsigned int num1 = 0;
    
    printbits(num);
    printbits(num1);

    return 0;
}