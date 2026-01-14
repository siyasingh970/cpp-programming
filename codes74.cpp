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
class derived3:public derived1,public derived2{
    public:
    void showderived3(){
        cout<<"derived3 class"<<endl;
    }
};
int main(){
    derived3 d;
    d.derived1::showbase();
    d.showderived1();
    d.showderived2();
    d.showderived3();
    return 0;


}