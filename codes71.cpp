#include<iostream>
using namespace std;
class base{
    public:
    void showbase(){cout<<"base class"<<endl;
    }
};
class derived1:public base{
    public:
    void showderived1(){
        cout<<"derived1 class"<<endl;

    }
};
class derived2:public derived1{ 
    public:
    void showderived2(){
        cout<<"derived2 class"<<endl;

    }
};
int main(){
    derived2 d;
    d.showbase();
    d.showderived1();
    d.showderived2();
    return 0;
}
