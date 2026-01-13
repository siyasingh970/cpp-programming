#include<iostream>
using namespace std;
class  classB;

class classA{
    int a=10;
    friend void showsum(classA & classB& );


};
class classB{
    int  b=20;
    friend void showsum(classA & classB& );

};
void showsum(classA& x, classB& y)
{
    cout<<"sum= "<<x.a +y.b<<endl;
}
int main(){
    classA objA;
    classB objB;
    showsum(objA,objB);


}