#include <iostream>
#include <array>

using namespace std;


int main () {
    array<int, 10> Arr = {0,1,2,3,4,5,6,7,8,9};
    for (int v : Arr) {
        cout << v << " ";
    };
    cout << endl;

    //change arr values
    for (int &v: Arr) {
        v*=3;
    }

    for (int v : Arr) {
        cout << v << " ";
    };

    cout << endl;
    return 0;
}