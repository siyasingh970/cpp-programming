#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int guess;
    int attempts=0;
    int maxattempts=5;
    srand(time(0));           //generate random number
    int range=rand()%100+1;      // generate random number between 1 to 100
    do{
        cout<<"welcome to the number guessing game";
        cout<<"enter your guess";
        cin>>guess;
        attempts++;
    if(guess<range){
        cout<<"too low ,try again";
    }
        if(guess>range){
            cout<<"too high, try again";

        }
        else{
            cout<<"congratulations you guessed the number";
        }
if (attempts==maxattempts){
cout<<"game over";

    break;
}
cout<<"attempts remaining"<<maxattempts-attempts<<endl;
    }
while(true);
return 0;
}  
    
    
