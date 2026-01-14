#include<iostream>
using namespace std;
class base1{
    public:
    void showbase1(){cout<<"base1 class"<<endl;
    }
};
class base2{
    public:
    void showbase2(){cout<<"base2 class"<<endl;
    }
};
class derived:public base1,public base2{
    public:
    void showderived(){cout<<"derived class"<<endl;
    }
};
int main(){
    derived d;
    d.showbase1();
    d.showbase2();
    d.showderived();
    return 0;
    
}