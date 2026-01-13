#include<iostream>
using namespace std;
int main(){
    // area of circle

    int r,area;
    cout<<"enter radius of circle:";
    cin>>r;
    area=3.14f*r*r;
    cout<<"area of circle:"<<area<<endl;
    return 0;
    
    // area of rectangle  


    int l,b;
    cout<<"enter l, b:";
    cin>>l>>b;
    area=l*b;
    cout<<"area of ractangle:"<<area<<endl;
    return 0;

    // area of triangle


    int h ;
    cout<<"enter h ,b:";
    cin>>h>>b;
    area=0.5f*h*b;
    cout<<"area of triangle:"<<area<<endl;
    return 0;


}