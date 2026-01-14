#include<iostream>
using namespace std;
class  Sample{
    int val;
    public:
    Sample(int v):val (v){}
    void show() const {cout<<"value: "<<val<<endl;
    }
};
int main(){
    Sample s(42);
    s.show();
    return 0;
}