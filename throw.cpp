#include <iostream>

using namespace std;

int main() {
    int angka;
    cout << "Masukan angka : " << endl;
    if (cin >> angka) {
        cout << "Angka yang Anda masukkan adalah " << angka << endl;
    } else {
        throw range_error("Format data tidak valid !");
    }

    return 0;
}