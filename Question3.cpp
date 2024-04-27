#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare and initialize the string array
    string arr[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // Find and display elements starting with 'B'
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i][0] == 'B') {
            cout << "Found an element starting with 'B': " << arr[i] << endl;
        }
    }

    return 0;
}
