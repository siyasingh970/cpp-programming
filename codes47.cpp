#include<iostream>
using namespace std;
class area{
    public:
    int length,breadth;

    int calcarea(){
        return length*breadth;

    }
};
int main(){
    area rect;
    rect.length=5;
    rect.breadth=4;
    cout<<"area: "<<rect.calcarea()<<endl;
    return 0;

}