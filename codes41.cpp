#include<iostream>
using namespace std;
class access{
    private:
    int secret=42;
    public: 
    void show(){
        cout<<"secret value:"<<secret<<endl;

    }
};
int main(){
    access obj;
    obj.show();
    return 0;
}