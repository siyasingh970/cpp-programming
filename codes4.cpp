#include<iostream>
using namespace std;
int main(){
    // constant variable
    const int PI=3.14159;
    cout<<"value of PI:"<<PI<<endl;
    // constant reference
    int  x=10;
    const int& refx=x;
    cout<<"value of refx"<<refx<<endl;
    // constant pointer
    int y=30;
    int* const ptry=&y;
    cout<<"value of *ptry:"<<*ptry<<endl;
    // pointer to constant
    const int* ptrz=&x;
    cout<<"value of *ptrz:"<<*ptrz<<endl;
    return 0;


}