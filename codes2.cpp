#include<iostream>
using namespace std;
int main(){
    int num1=5,num2=10,temp;
     cout<<"enter num1";
     cin>>num1;
     cout<<"enter num2";
      cin>>num2;
    cout<<"before swapping num1 is "<<num1<<" num2 "<<num2<<endl;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"after swapping num1 is "<<num1<<" num2 "<<num2<<endl;
    return 0;
}