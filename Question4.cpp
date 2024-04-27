#include <iostream>
#include <limits>
using namespace std;

int main(){

    int integerValue;
    
    while(true){
         cout <<"Enter Integer between 5 and 10: " <<endl;
         
         if(!(cin >> integerValue)){
            cout << "sorry, you have entered an invalid integer, please try again" << endl;
            continue;
         }
       
         if(integerValue >= 5 && integerValue <= 10){
            cout << "Your input value(" << integerValue << ") has been accepted"<<endl;
            break;
        
         }else{
            cout << "you entered " << integerValue <<". Please enter a number between 5 and 10" <<endl;
        }
    }
    return 0;
}