#include<iostream>
using namespace std;
int main(){
    // table using while loop
    int num,i=1;
    cout<<"enter a number:";
    cin>>num;
    cout<<"table of "<<num<<endl;
    while(i<=10){
        cout<<num<<"x"<<i<<"="<<num*i<<endl;
        i++;
    }
    return 0;
}