#include<iostream>
using namespace std;

    struct student{
        char name[50];
        int roll;
        float marks;
        
    };
    int main(){
        student s;
        cout<<"enter student name:";
        cin.getline(s.name,50);
        cout<<"enter roll no.:";
        cin>>s.roll;
        cout<<"enter marks:";
        cin>>s.marks;
        cout<<"student details: ";
        cout<<"name "<<s.name<<endl;
        cout<<"roll :"<<s.roll<<endl;
        cout<<"marks :"<<s.marks<<endl;
        return 0;

    }
