#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollNo;
    static int code;
    
    static void key(){
        cout<<code<<endl;
    }

};

// scope resolution operator -> (::)
int Student::code=6065;

int main()
{
    cout<<Student::code<<endl;  //6065
    Student s1;
    cout<<s1.code<<endl;       //6065
    s1.key();        //6095

    Student s2;
    s2.code=95;
    cout<<s2.code<<endl;     //95
    cout<<s1.code<<endl;     //95
    
    return 0;
}

/* 

    Output:
    6065
    6065
    6065
    95
    95

*/