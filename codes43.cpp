#include<iostream>
using  namespace std;
class employee{
    public:
    string name;
    int id;
    void display(){cout<<"employee name:   "<<name<<"id number:   "<<id<<endl;}
    
};
int main(){
    employee emp;
    emp.name="john doe";
    emp.id=456;
    emp.display();
}