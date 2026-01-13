#include<iostream>
using namespace std;
class dynamic{
    int *ptr;
    public:
    dynamic(){
        ptr=new int ;
        *ptr=100;
        cout<<"allocate memory:  "<<*ptr<<endl;
    }
    ~dynamic(){
        delete ptr;
    }

};
int main(){
    dynamic obj;
    return 0;
}