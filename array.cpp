#include <iostream>
#include <array>

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
    array<int, 1000> nilaiArr;

    for (int i = 0; i <= ln; ++i) {
        nilai[i]= i+1;
        nilaiArr[i] = i;
    };

    cout << "Size array : " << sizeof(nilai) << "byte" << endl;
    cout << "Length array : " << sizeof(nilai)/sizeof(int) << endl;
    displayArray(nilai, ln);
    cout << "Size array : " << nilaiArr.size() << endl;
    
    return 0;
}
