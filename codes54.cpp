#include<iostream>
using namespace std;
class base{
    public:
    base(){cout<<"base constructor"<<endl;
    }
};
class derived:public base{
    public:
    derived (){cout<<"derived constructor"<<endl;}

};
int main(){
    derived d;
    return 0;
}