//     Getter & Setter

#include<iostream>
using namespace std;

class account{

    public:
    string username;

    private:
    string password;

    public:
    void setPass(string pass){
        password = pass;
    }

    string getPass(){
        return password;
    }
};


int main()
{
    account A1;

    A1.username="rajkishorbgp";
    A1.setPass("mit@12345");
    cout<<"username : "<<A1.username<<endl;  //  username : rajkishorbgp
    cout<<"Password : "<<A1.getPass()<<endl; //  Password : mit@12345

    return 0;
}

/*  

  Output:
  username : rajkishorbgp
  Password : mit@12345
  
*/