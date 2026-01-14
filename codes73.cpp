#include<iostream>
using namespace std;
class base{
    public:
    void showbase(){
        cout<<"base class"<<endl;
    }
};
class derived1:public base{
    public:
    void showderived1(){
        cout<<"derived1 class"<<endl;
    }
};
class derived2:public base{
    public:
    void showderived2(){
        cout<<"derived2 class"<<endl;
    }
};
int main(){
    derived1 d1;
    derived2 d2;
    d1.showbase();
    d1.showderived1();
    d2.showbase();
    d2.showderived2();

}
