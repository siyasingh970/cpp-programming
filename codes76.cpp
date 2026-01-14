#include<iostream>
using namespace std;
class base{
    public:
    void show(){cout<<"virtual base class"<<endl;
    }
};
class derived1:virtual public base{

};
class derived2:virtual public base{

};
class derived3: public derived1,public derived2{

};
int main(){
    derived3 d;
    d.show();
    return 0;

}