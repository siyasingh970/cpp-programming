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
    
    if(n<2){
        cout<<"need at least 2 elements!\n";
        return 0;


    }
    int INT_MIN;
    int largest=INT_MIN, second=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second =largest;
            largest=arr[i];

        }else if(arr[i]>second&& arr[i]!=largest){
            second=arr[i];

        }
        
    }
    if(second==INT_MIN){
        cout<<"no second largest(all elements same)\n";

    }else{
        cout<<"second largest:"<<second<<endl;
    }



        return 0;
    }
