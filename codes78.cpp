#include<iostream>
using namespace std;
class base{
    protected:
    void showbase(){
        cout<<"base class protected"<<endl;
    }
};
class derived:protected base{
    public:
    void show(){
        showbase();
        cout<<"derived class"<<endl;
    }
};
int main(){
    derived d;
    d.show();
    return 0;
}
