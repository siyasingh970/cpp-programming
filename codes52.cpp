#include <iostream>
using namespace std;
class overload{
    public:
    overload(){
        cout<<"no-arg constructor"<<endl;}
        overload(int a){
            cout<<"int constructor"<<a<<endl;}
        overload(double b){
            cout<<"double constructor"<<b<<endl;

        }
    };
    int main(){
        overload o1,o2(5),o3(3.14);
        return 0;

    }




        
    
   


