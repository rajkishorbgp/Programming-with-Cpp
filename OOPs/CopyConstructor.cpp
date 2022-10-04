#include<iostream>
#include<string.h>
using namespace std;

class Student{
    string name;
    int rollNo;
    char *add;
    public:
    void setName(string name){
        this->name=name;
    }
    void setRollNo(int rollNo){
        this->rollNo=rollNo;
    }
    string getName(){
        return name;
    }
    int getRollNo(){
        return rollNo;
    }
    void setAdd(char add[]){
        strcpy(this->add , add);
    }


    // Student(){
    //     add =new char[100];
    // };

    // is not no creat by defolt automatically creat!
    // Student (Student& st){
    //     this->name=st.name;
    //     this->rollNo=st.rollNo;
    // }


};

int main()
{
    Student s1;
    s1.setName("Raj kishor");
    s1.setRollNo(6095);
    cout<<"Name :" <<s1.getName()<<endl;
    cout<<"Roll No : " << s1.getRollNo()<<endl;
    char add[]= "mohanpur";
    s1.setAdd(add);
     
    Student s2(s1);   // Copy Constructor
    cout<<"Name :" <<s2.getName()<<endl;
    cout<<"Roll No : " <<s2.getRollNo()<<endl;


    return 0;
}