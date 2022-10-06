#include<iostream>
#include<string.h>
using namespace std;

class Student{

    string name;
    int rollNo;
    char *add;

    public:

    Student(){
        cout<<"Constructor called..."<<endl;
        add = new char[100];
    }
    
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

    void printAdd(){
        cout<<this->add<<endl;
    }


    // Student(){
    //     add =new char[100];
    // };

    // is not no creat by defolt automatically creat!
    // Student (Student& st){
    //     this->name=st.name;
    //     this->rollNo=st.rollNo;
    // }

    // deep copy  constructor
    Student(Student& temp){
        char *ch = new char(strlen(temp.add)+1);
        strcpy(ch,temp.add);
        this->add=ch;
        this->name=temp.name;
        this->rollNo=temp.rollNo;
    }   

};

int main()
{
    Student s1;
    s1.setName("Raj kishor");
    s1.setRollNo(6095);
    cout<<"Name :" <<s1.getName()<<endl;
    cout<<"Roll No : " << s1.getRollNo()<<endl;
    char add[]= "Mohanpur";
    s1.setAdd(add);
     
    Student s2(s1);   // Copy Constructor
    cout<<"Name :" <<s2.getName()<<endl;
    cout<<"Roll No : " <<s2.getRollNo()<<endl;
    cout<<"s2 add : ";
    s2.printAdd();
    s2.setAdd("Mohan");
    cout<<"s2 add : ";
    s2.printAdd();
    cout<<"s1 add : ";
    s1.printAdd();

    // Copy Assignment  operator
    s2=s1;

    cout<<"Name :" <<s2.getName()<<endl;
    cout<<"Roll No : " <<s2.getRollNo()<<endl;
    cout<<"s2 add : ";
    s2.printAdd();
    cout<<"s1 add : ";
    s1.printAdd();


    return 0;
}

/*
    Output:
    
    Constructor called...
    Name :Raj kishor
    Roll No : 6095
    Name :Raj kishor
    Roll No : 6095
    s2 add : Mohanpur
    s2 add : Mohan
    s1 add : Mohanpur
    Name :Raj kishor
    Roll No : 6095
    s2 add : Mohanpur
    s1 add : Mohanpur
    
*/