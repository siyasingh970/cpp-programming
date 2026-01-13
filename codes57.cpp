#include<iostream>
using namespace std;
class privateaccess{
    int secret=777;
    friend void reveal(privateaccess &);

};
void reveal (privateaccess &obj){
    cout<<"private secret= "<<obj.secret<<endl;
}
int main(){
    privateaccess obj;
    reveal(obj);
    
}