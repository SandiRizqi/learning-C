#include <iostream>

using namespace std;

int main() {
    // f_n  = f(n-1) + f(n-2)
    int n;
    cout << "Masukan Nilai Max Fibo :" << endl;
    cin >> n;
    int n_1 = 0;
    int n_2 = 0;
    int n_out = 0;
    for (int i = 0; i <= n;) {
        if(i>1) {
            n_out = n_2 + n_1;
            cout << n_out << endl;

            n_1 = n_2;
            n_2 = n_out;
            i = n_out;
        } else if(i == 1) {
            n_2 = n_1 + i;
            cout << n_2 << endl;
            ++i;
        }
        else {
            n_1 = i;
            cout << n_1 << endl;
            ++i;
        }
        //

    };

    return 0;
}

