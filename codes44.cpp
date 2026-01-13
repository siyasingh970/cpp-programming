#include<iostream>
using namespace std;
class arithmetic{
    public:
    int add(int a,int b){
        return a+b;
    }
    int sub(int a,int b){
        return a-b;
    }    
    int product(int a,int b){
        return a*b;
    }
    int divide(int a,int b){
        return a/b;
    }

    
};
int main(){
    arithmetic op;
   cout<<"additon: "<< op.add(5,7)<<endl;
    cout<<"subtract: "<<op.sub(10,8)<<endl;
    cout<<"multiply: "<<op.product(10,8)<<endl;
    cout<<"divide: "<<op.divide(10,8)<<endl;
    
    return 0;


}