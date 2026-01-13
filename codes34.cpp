#include<iostream>
using namespace std;
int main(){
    int rows,cols,A[10][10],B[10][10],sum[10][10];
    cout<<"enter rows and cols:";
    cin>>rows>>cols;
    cout<<"enter matrix A:";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>A[i][j];
        }
    }
    cout<<"enter matrix B:";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>B[i][j];
        }

}
 for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            sum[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<"addition of matrix:";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<sum[i][j]<<" ";
        }
    }
cout<<endl;
return 0;
    }
