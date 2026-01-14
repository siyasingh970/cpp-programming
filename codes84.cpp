#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter characters(type'.' to stop):  ";
    while(cin.get(ch)&&ch!='.'){
        cout.put(ch);
    }
    cout<<endl;
    return 0;
}