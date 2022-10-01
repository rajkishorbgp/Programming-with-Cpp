/*
                size and range of C++ basic data types
*/

#include<iostream>
using namespace std;
int main()
{ 
    //character
    cout<<"char : "<<sizeof(char)<<endl;                         //char : 1
    cout<<"unsigned char : "<<sizeof(unsigned char)<<endl;       //unsigned char : 1
    cout<<"signed char : "<<sizeof(signed char)<<endl;           //signed char : 1
    cout<<endl;

    cout<<"unsigned short int : "<<sizeof(unsigned short int)<<endl;  //unsigned short int : 2
    cout<<"signed short int : "<<sizeof(signed short int)<<endl;      //signed short int : 2
    cout<<"long int : "<<sizeof(long int)<<endl;                      //long int : 4
    cout<<"signed long int : "<<sizeof(signed long int)<<endl;        //signed long int : 4
    cout<<"unsigned long int : "<<sizeof(unsigned long int)<<endl;    //unsigned long int : 4
    cout<<endl;

    //float
    cout<<"float : "<<sizeof(float)<<endl;                   //float : 4
    cout<<"double : "<<sizeof(double)<<endl;                //double : 8
    cout<<"long double: "<<sizeof(long double)<<endl;       //long double: 12
    cout<<endl;

    char               cr;     // [-128 to 127]
    unsigned char      uCr;    // [0 to 255]
    signed char        sCr;    // [-128 to 127]

    //Integer
    cout<<"size of int : "<<sizeof(int)<<"Bytes"<<endl;                // size of int : 4 Bytes
    int it=2147483647,   it1=2147483648;          // [-2147483648 to 8214743647]
    cout<<"int => "<<"it : "<<it<<"  int2 : "<<it1<<endl<<endl;  // int => it : 2147483647  int2 : -2147483648
   
    cout<<"unsined int : "<<sizeof(unsigned int)<<endl;         //unsined int : 4
    unsigned int       uIt=4294967295,  uIt1=4294967297;        // [0 to 4294967295]
    cout<<"unsigned int => "<<"uIt : "<<uIt<<"  uIt1 : "<<uIt1<<endl<<endl; //unsigned int => uIt : 4294967295  uIt1 : 1

    cout<<"signed int : "<<sizeof(signed int)<<endl;             //signed int : 4

    signed int         sIt=2147483647, sIt1=2147483648;    // [-2147483648 to 2147483647]
    cout<<"signed int => "<<"sIt : "<<sIt<<"   sIt1 : "<<sIt1<<endl<<endl; // signed int => sIt : 2147483647   sIt1 : -2147483648

    cout<<"short int : "<<sizeof(short int)<<endl;              //short int : 2
    short int          shIt=32767,  shIt1=32768;   // [-32768 to 32767]
    cout<<"short int => "<<"shIt : "<<shIt<<"   shIt1 : "<<shIt1<<endl<<endl;  //short int => shIt : 32767   shIt1 : -32768


    unsigned short int uShit;  // [0 to 65535]
    signed short int   sShIt;  // [-32768 to 32767]
    signed long int    sLIt;   // [-2147483648 to 2147483647]
    unsigned long int  uLIt;   // [0 to 4294967295]

    float              ft;     // [3.4E-38 to 3.4E+38]
    double             db;     // [1.7E-308 to 1.7E+308]
    long double        lDb;    // [3.4E-4932 to 1.1E+4932]

    
    cout<<endl;
} 