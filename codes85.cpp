#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double pi=3.1415364758;
    int num=123;
cout<< setw(10)<<"number"<<setw(10)<<"pi"<<endl;
cout<< setw(10)<<num<<setw(10)<<setprecision(4)<<pi<<endl;
return 0;

}