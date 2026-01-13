#include<iostream>
using namespace std;
class memberfunc{
    public:
    void func1(){cout<<"function 1"<<endl;}
    void func2(){ cout<<"function 2"<<endl;}
};
int main(){
    memberfunc obj;
    obj.func1();
    obj.func2();
    return 0;
}