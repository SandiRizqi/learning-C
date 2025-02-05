#include <iostream>

using namespace std;

int main () {
    int leng = 10;
    for (int i = 0; i <= leng; ++i) {
        for( int j= 0; j <= i ;++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}