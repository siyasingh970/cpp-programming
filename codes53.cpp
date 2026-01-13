#include<iostream>
using namespace std;
class Destructor{
    public:
    Destructor(){
        cout<<"constructor called"<<endl;

    }
    ~Destructor(){
        cout<<"Destructor called"<<endl;}
    };
    int main(){
        Destructor obj;
        return 0;
    }



    
