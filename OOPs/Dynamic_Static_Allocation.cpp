
//  Dynamic allocation and Static allocation memori

#include<iostream>
using namespace std;

class student{
    public:
    string name ="Raj kishor";
    long long int rollNo=211110106095;
};

int main()
{
    // Static allocation 
    student s1;  
    cout<<"Student 1..."<<endl;
    cout<<"Name : "<<s1.name<<endl;
    cout<<"Roll No. : "<<s1.rollNo<<endl;

    //  Dynamic allocation
    student *s2 = new student;
    cout<<endl<<"Student 2..."<<endl;
    cout<<"Name: "<<(*s2).name<<endl;
    cout<<"Roll no. : "<<(*s2).rollNo<<endl;

    return 0;
}

/*
    Output:
    Student 1...
    Name : Raj kishor
    Roll No. : 211110106095

    Student 2...
    Name: Raj kishor
    Roll no. : 211110106095
*/