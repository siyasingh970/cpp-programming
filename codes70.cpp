#include<iostream>
using namespace std;
class base{
    public:
    void showbase(){
        cout<<"base class function"<<endl;
    }
};
class derived:public base{
    public:
    void showderived(){
        cout<<"derived class function"<<endl;
    }
};
int main(){
    derived d;
    d.showbase();
    d.showderived();
    return 0;
}