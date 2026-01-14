#include<iostream>
using namespace std;
class student{
    protected:
    int rollno;
    string name;
    public:
    void getdetails(){
        cout<<"enter roll no and name: ";
        cin>>rollno>>name;

    }
    void showdetails(){
        cout<<"roll no: "<<rollno<< ", name: "<<name<<endl;
    }
};
class marks:public student{
    protected:
    int marks1,marks2;
    public:
    void getmarks(){
        cout<<"enter marks in two subjects: ";
        cin>>marks1>>marks2;

    }
    void showmarks(){
        cout<<"marks1: "<<marks1<<", marks2"<<marks2<<endl;

    }

};
class result:public marks{
    public:
    void displayresult(){
        showdetails();
    showmarks();
cout<<"total:  "<<marks1+marks2<<endl;   
 }
};
int main(){
    result r;
    r.getdetails();
    r.getmarks();
    r.displayresult();
    return 0;
}