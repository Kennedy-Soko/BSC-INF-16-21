#include <iostream>
using namespace std;

int main() {
    int rows, columns;

    do {
        cout << "Enter the number of rows , maximum must be equal to 3: ";
        cin >> rows;
        if (rows > 3) {

            cout << "Error:The maximum number of rows has exceeded. Please enter a value not more than 3." << endl;
        }
    } while (rows > 3);

    do {
        cout << "Enter the number of columns, maximum number = 3: ";
        cin >> columns;
        if (columns > 3) {
            cout << "Error: Maximum number of columns has exceeded. Please enter a value not more than equal to 3." << endl;
        }
    } while (columns > 3);

    double** array = new double*[rows];
    for (int a = 0; a < rows; ++a) {
        array[a] = new double[columns];
    }

    cout << "Enter the values for the array:" << endl;
    for (int a = 0; a < rows; ++a) {
        for (int b = 0; b < columns; ++b) {
            cout << "Enter value for element [" << a << "][" << b << "]: ";
            cin >> array[a][b];
        }
    }

    cout << "Values of the array:" << endl;
    for (int a = 0; a < rows; ++a) {
        for (int b = 0; b < columns; ++b) {
            cout << array[a][b] << "\t";
        }
        cout << endl;
    }

    for (int a = 0; a < rows; ++a) {
        delete[] array[a];
    }
    delete[] array;

    return 0;
}
