
//     Access Modifiers ( public , private )

#include<iostream>
using namespace std;

class Hero{

    public:
    int no=30;
    char c='R';

    private:
    int password=6095;

    public:
    void printPass(){
        cout<<password;
    }
};

int main()
{
    Hero h1;
    cout<<h1.no<<endl;  // 30
    cout<<h1.c<<endl;   // R
    // cout<<h1.password<<endl;  Not access privade data 
    h1.printPass();

    return 0;
}