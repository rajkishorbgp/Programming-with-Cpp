#include<iostream>
using namespace std;

class student{
    public:
    string name;
    long long int rollNo;
    student(){
        cout<<"this address : "<< this << endl;
        cout<<"Student Constructor Called..."<<endl;
    }
};

class Employee{
    public:
    string name;
    int idNo;
    Employee(){
        cout<<" Employee Constructor Called..."<<endl;
     }
    Employee(string name , int idNo){
        cout<<" Employee Constructor Called..."<<endl;
        this->name=name;
        this->idNo=idNo;
    }
};

int main()
{
    student s1;
    cout<<"s1 address : " << &s1<<endl;

    student *s2 = new student;
    cout<<"s2 address : "<< s2 <<endl;
    cout<<"s2 address : "<< &s2 <<endl;
    cout<<"s2 address : "<< &*s2 <<endl;
    s2->name="raj";
    student *s3 = new student();
    
    cout<<"s3 address : "<< &s3 <<endl;


    Employee e1("rajkishor",80000);
    cout<<"Employee name: "<<e1.name<<endl;


    return 0;
}
