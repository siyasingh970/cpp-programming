#include<iostream>
using namespace std;
class simple{
    public:
    void display (){
        cout<<"hello from simple class"<<endl;
    }

};
int main(){
    simple obj;
    obj.display();
    return 0;
}