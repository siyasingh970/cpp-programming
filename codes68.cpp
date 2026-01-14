#include<iostream>
using namespace std;
class secret{
    int hidden=42;
    public:
    int gethidden(){
        return hidden;
    }
};
int main(){
    secret s;
    cout<<"hidden value: "<<s.gethidden()<<endl;
    return 0;
}