#include<iostream>
using namespace std;
int main(){
    int arr[100],n,max;
    cout<<"enter number of elements";
    cin>>n;
    cout<<"enter"<<n<<"elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    cout<<"largest elements:"<<max<<endl;
    return 0;
}