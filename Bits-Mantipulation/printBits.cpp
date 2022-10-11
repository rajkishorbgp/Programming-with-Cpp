#include<iostream>
using namespace std;

void printIntBits(int value) // 32 bits
{
    for (int i = 31; i >= 0; i--)
    {
        cout<<((value >> i) & 1);
    }
    cout<<endl;
}

void printCharBit(char value){  // 8 bits
    for (int i =7; i >= 0; i--)
    {
        cout<<((value>> i) & 1);
    }
    
}

void printFloatBit(float value){  // 32 bits
    for (int i = 31; i <=0; i++)
    {
        cout<<((value>> i) & 1);
    }
}

int main()
{
    int num = -10;
    unsigned int num1 = 10;
    
    printIntBits(num);
    printIntBits(num1);

    printCharBit('a');

    printFloatBit(5.2);
    return 0;
}