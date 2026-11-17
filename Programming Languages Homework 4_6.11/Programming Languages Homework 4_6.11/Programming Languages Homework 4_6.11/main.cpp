#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int arraySize = 10; 
    int a[arraySize] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    cout << "原始資料順序:\n";
    for (int i = 0; i < arraySize; ++i) {
        cout << setw(4) << a[i];
    }
    cout << endl;

    for (int pass = 1; pass < arraySize; ++pass) {
        bool swapped = false; 

        for (int i = 0; i < arraySize - pass; ++i) {
            if (a[i] > a[i + 1]) {
                int hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }

    cout << "\n升冪排序後的資料順序:\n";
    for (int i = 0; i < arraySize; ++i) {
        cout << setw(4) << a[i];
    }
    cout << endl;
	system("pause");
    return 0;
}