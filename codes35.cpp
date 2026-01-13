#include<iostream>
using namespace std;
int main(){
    int r1,r2,c1,c2,A[10][10],B[10][10],C[10][10];
    cout<<"enter rows and cols of matrix A:";
    cin>>r1>>c1;
     cout<<"enter rows and cols of matrix B:";
    cin>>r2>>c2;
    if(c1!=r2){
        cout<<"matrix multiplication not possible:";
        return 0;

    }
    cout<<"enter matrix A:";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    cout<<"enter matrix B:";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }

} for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
            C[i][j]= C[i][j]+A[i][k]*B[k][j];
        }
    }
}
    cout<<"multiplication of matrix (A X B):";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<" ";
        }
    }
cout<<endl;
return 0;
    }


