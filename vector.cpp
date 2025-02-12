#include <iostream>
#include <vector>

using namespace std;

void displayMatrix(vector<int> &A) {
    int ln = A.size();
    for (int i = 0; i < ln; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main () {
    vector<int> matrixA = {1,4,6,7};
    matrixA.push_back(10);

    displayMatrix(matrixA);
    cout << "Size : " << sizeof(matrixA) << endl;

    return 0;
}