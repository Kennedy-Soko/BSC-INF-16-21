#include <iostream>
#include <string>
using namespace std;

int main(){

    int* dynamicInteger = new int;
    string* dynamicString = new string;

    /*This prompts the user to enter integer*/ 
    cout << "Enter an integer value: ";
    cin >> *dynamicInteger;

    cout << "Enter a string value: ";
    cin.ignore(); 
    getline(cin, *dynamicString);
    
    cout << "The allocated integer value: " << *dynamicInteger << endl;
    cout << "The allocated string value: " << *dynamicString << endl;
    delete dynamicString;
    delete dynamicInteger;
    
    return 0;
}
