#include<iostream>
using namespace std;
class multiconstructor{
    public:
    multiconstructor(){
        cout<<"default constructor"<<endl;
    }
    multiconstructor(int a){
        cout<<"int constructor: "<<a<<endl;

    }

    };
    int main(){
        multiconstructor obj1;
        multiconstructor obj(50);
        return 0;

    }
