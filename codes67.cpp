#include<iostream>
using namespace std;
class math{
    public:
    static int square(int x){return x*x;}

};
int main(){
    cout<<"square of 5: "<<math::square(5)<<endl;
    return 0;
}