#include<iostream>
using namespace std;
class differentiate{
    int a;
    public:
    void set(int a){
        this->a=a;

    }
    void show(){
        cout<<"member a= "<<a<<endl;

    }
};
int main(){
    differentiate obj;
    obj.set(50);
    obj.show();
    return 0;
}