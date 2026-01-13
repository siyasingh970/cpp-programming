#include<iostream>
using namespace std;
int main(){
// grading system

    int marks;
    cout<<"enter your marks:";
    cin>>marks;
    if (marks>=90){
        cout<<"grade A"<<endl;
    }
    else if (marks>=70)
    {
        cout<<"grade B"<<endl;
    }
    else{
        cout<<"grade C"<<endl;
    }
    
    return 0;
}