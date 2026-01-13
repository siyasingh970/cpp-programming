#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr=&x;
    cout<<"value of x:"<<x<<endl;
    cout<<"address of x:"<<&x<<endl;
    cout<<"pointer ptr stores:"<<ptr<<endl;
    cout<<"value at ptr (*ptr):"<<*ptr<<endl;
    *ptr=20;
    cout<<"updated x:"<<x<<endl;
    return 0;

}