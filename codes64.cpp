#include<iostream>
using namespace std;
class staticmember{
    public:
    static int count;
    staticmember(){count++;}
    static void show(){
        cout<<"static count: "<<count<<endl;

    }
};
int staticmember::count=0;
int main(){
    staticmember s1,s2;
    staticmember::show();
    return 0;
}