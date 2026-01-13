#include<iostream>
using namespace std;
class data{
    int privatedata=999;
    friend class friendclass;

};
class friendclass{
    public:
    void display(data &d){
        cout<<"private data=  "<<d.privatedata<<endl;
        }
};
int main(){
    data obj;
    friendclass friendobj;
    friendobj.display(obj);
    return 0;
}