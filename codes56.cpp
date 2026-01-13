#include<iostream>
using namespace std;
class constmember{
    const int data;
    public:
    constmember(int d):data (d){
        cout<<"const data: "<<data <<endl;
    }

};
int main(){
    constmember obj(200);
    return 0;
}