#include<iostream>
using namespace std;
class parameterized{
    public:
    parameterized(int x){
        cout<<"parameterized constructor: "<<x<<endl;

    }

};
int main(){
    parameterized obj(100);
    return 0;
}