#include<iostream>
using namespace std;
class overload{
    public:
void display(int x){
    cout<<"integer: "<<x<<endl;

} 
void display(double x)

{
cout<<"double: "<<x<<endl;
}
void display(string s){
    cout<<"string: "<<s<<endl;
}
};
int main(){
    overload obj;
    obj.display(5);
    obj.display(3.14);
    obj.display("hello");
    return 0;
}
 