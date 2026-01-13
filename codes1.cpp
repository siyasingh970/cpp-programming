#include <iostream>
#include<limits>
using namespace std;
int main(){
   
cout<<"int min"<<numeric_limits<int>::min()<<endl;
cout<<"int max"<<numeric_limits<int>::max()<<endl;
cout<<"float min"<<numeric_limits<float>::min()<<endl;
cout<<"float max"<<numeric_limits<float>::max()<<endl;
cout<<"char min"<<numeric_limits<char>::min()<<endl;
cout<<"char max"<<numeric_limits<char>::max()<<endl;
cout<<"double min"<<numeric_limits<double>::min()<<endl;
cout<<"double max"<<numeric_limits<double>::max()<<endl;
cout<<"unsigned int min"<<numeric_limits<unsigned int>::min()<<endl;
cout<<"unsigned int max"<<numeric_limits< unsigned int>::max()<<endl;
   
return 0;
}
