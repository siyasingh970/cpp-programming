#include<iostream>
using namespace std;
int main(){
    char src[100],dest[100];
    int i=0;
    cout<<"enter a string:";
    cin.getline(src,100);
    while(src[i]!='\0'){
        dest[i]=src[i];
        i++;

    }
    dest[i]='\0';
    cout<<"copied string"<<dest<<endl;
    return 0;
}