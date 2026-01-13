#include<iostream>
using namespace std;
int main(){
    int arr[100],n;
    cout<<"enter number of elements";
    cin>>n;
    cout<<"enter"<<n<<"elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<"you entered:";
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
cout<<endl;
    return 0;
} 