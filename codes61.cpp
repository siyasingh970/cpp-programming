#include<iostream>
using namespace std;
class notmutual {
    int data=555;
    friend class oneway;

};
class oneway{
    public:
    void show(notmutual &obj){
        cout<<"oneway can access: "<<obj.data<<endl;

    }
};
int main(){
    notmutual obj1;
    oneway obj2;
    obj2.show(obj1);
    return 0;

}
