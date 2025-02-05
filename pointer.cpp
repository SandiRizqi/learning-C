#include <iostream>

using namespace std;

int main () {
    int a = 7;

    int *aPtr = &a;

    cout << "Nilai a : " << a << endl;
    cout << "Address a : " << aPtr << endl;
    cout << "Value Address a : " << *aPtr << endl;

    return 0;
}

