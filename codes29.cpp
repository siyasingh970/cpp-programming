#include<iostream>
using namespace std;
int main(){
    int n;
    input:
    cout<<"enter number:";
    cin>>n;
    if(n<1||n>5){
        cout<<"invalid input!";
        goto input;

    }
    cout<<"you entered:"<<n<<endl;
    return 0;
}