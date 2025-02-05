#include <iostream>

using namespace std;

void displayArray(int arr[], int ln) {
    for (int i = 0; i < ln; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main () {
    int ln = 1000;
    int nilai[ln];
    for (int i = 0; i <= ln; ++i) {
        nilai[i]= i+1;
    };

    cout << "Size array : " << sizeof(nilai) << "byte" << endl;
    cout << "Length array : " << sizeof(nilai)/sizeof(int) << endl;
    displayArray(nilai, ln);
    return 0;
}
