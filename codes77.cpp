#include<iostream>
using namespace std;
class base{
    public:
    void showbase(){
        cout<<"base class"<<endl;

    }
};
class derived:private base{
    public:
    void show()
    { showbase();
        cout<<"derived class"<<endl;


    }
};
int main(){
    derived d;
    d.show();
    return 0;
}