#include<iostream>
using namespace std;
class Default{
    public:
    Default(){
        cout<<"default constructer called"<<endl;

    }

};
int main(){
    Default obj;
    return 0;
}