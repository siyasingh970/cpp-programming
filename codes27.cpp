#include<iostream>
using namespace std;
int main(){
    // number series do while loop
    int n,i=0,term=1;
    cout<<"enter number of terms:";
    cin>>n;
    cout<<" series: ";
    do{
        cout<<term<<"  ";
        term=term*2;
        i++;
    }while(i<n);
    cout<<endl;
    return 0;
}