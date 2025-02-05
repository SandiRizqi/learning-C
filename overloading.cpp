#include <iostream>

using namespace std;


int luas_kotak(double panjang, double lebar) {
    return panjang * lebar;
};

int luas_kotak(double sisi) {
    return sisi * sisi;
}

int main() {
    cout << "Luas Kotak : " << luas_kotak(20,23) << endl;
    cout << "Luas Kotak : " << luas_kotak(255) << endl;

    return 0;
}