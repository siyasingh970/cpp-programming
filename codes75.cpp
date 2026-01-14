#include<iostream>
using namespace std;
class base{
    public:
    void show(){
        cout<<"base class member"<<endl;
    }
};
class derived : public base{
    public:
    void accessbase(){
        base::show();
    }
};
int main(){
    derived d;
    d.accessbase();
    return 0;
}
