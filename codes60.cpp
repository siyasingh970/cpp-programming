#include<iostream>
using namespace std;
class number{
    int num;
    public:
    number(int n=0):num(n){}
    friend number operator+(const number &,const number &);
    void show(){cout<<num<<endl;}
};
number operator+(const number &a,const number &b){
    return number(a.num +b.num);

}
int main(){
    number n1(5),n2(3),n3;
    n3=n1+n2;
    n3.show();
return 0;
}