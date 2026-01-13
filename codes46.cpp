#include<iostream>
using namespace std;
class largest{
    public:
    int findmax(int a,int b){
        return (a>b)?a:b;

    }
};
int main(){
    largest obj;
    cout<<"largest:"<<obj.findmax(8,12)<<endl;
    return 0;
}