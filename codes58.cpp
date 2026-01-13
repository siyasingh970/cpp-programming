#include<iostream>
using namespace std;
class Demothis{
    int x;
    public:
    Demothis(int x){
        this->x=x;


    }
    void display(){
        cout<<"value of x= "<<this->x<<endl;
    }
};
int main(){
    Demothis obj(100);
    obj.display();
    return 0;
}