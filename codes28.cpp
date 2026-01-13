#include<iostream>
using namespace std;
int main(){
    // break statement
    int i;
    cout<<"break example :";
    for(i=1;i<=10;i++){
        if(i==6) break;
        cout<<i ;
        
    }cout<<endl;
    // continue statement
    cout <<"continue example:";
    for(i=1;i<=10;i++){
        if(i==6) continue;
        cout<<i;
    }
    return 0;

}
