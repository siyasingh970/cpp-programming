#include<iostream>
using namespace std;
class demo {
    int data;
    public:
    demo(int d):data (d){}
    int getdata() const {return data;}


};
int main(){
    const demo obj(100);
    cout<<"data: "<<obj.getdata()<<endl;
    return 0;
}