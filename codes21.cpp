#include<iostream>
using namespace std;
int main(){
    // nested if
    int marks,attendence;
    cout<<"enter marks:";
    cin>>marks;
    cout<<"enter attendence:";
    cin>>attendence;
    if(marks>=60){
        if(attendence>=70){
            cout<<"grade a"<<endl;
        }
            else{
                cout<<"grade b"<<endl;

            }
         } else if(marks>=40){
            if(attendence>=70){
                cout<<"grade c"<<endl;
            }
            else{
                cout<<"grade d"<<endl;

            }

    
            

            }else{
                cout<<"fail"<<endl;

            }
              return 0;  
            

        

        
}