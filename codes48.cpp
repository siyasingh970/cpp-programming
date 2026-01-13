#include<iostream>
using namespace std;
class outer{
    public:
    class inner{
        public:
        void show(){
        cout<<"inside nested class"<<endl;
        }
    };
};
int main(){
    outer::inner obj;
    obj.show();
    return 0;
    
}