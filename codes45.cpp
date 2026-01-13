#include<iostream>
using namespace std;
class compare{
    public:
    int num;
    bool isequal(compare c){
        return num==c.num;
    }
};
int main()
{
compare obj1,obj2;
obj1.num =100;
obj2.num =100;
cout<<"objects are "<<(obj1.isequal(obj2)?"equal":"not equal")<<endl;
return 0;
}