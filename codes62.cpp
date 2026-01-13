#include<iostream>
using namespace std;
class swapprivate{
    int a,b;
    public:
    swapprivate(int x,int y):a(x),b(y){}
    friend void swapvalues(swapprivate&);
    void display (){cout<<"a= "<<a<<"b = "<<b<<endl;
    }

};
void swapvalues(swapprivate &obj){
    int temp=obj.a;
    obj.a=obj.b;
    obj.b=temp;


}
int main(){
    swapprivate obj(10,20);
    cout<<"before swap: ";
    obj.display();
    swapvalues(obj);
    cout<<"after swap: ";
    obj.display();
    return 0;
}