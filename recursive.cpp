#include <iostream>
using namespace std;


int pangkat(int a, int b) {
    if (b<=1) {
        return a;
    } else {
        return a * pangkat(a, (b-1));
    }
} 

int factorial(int a) {
    if (a <= 1) {
        return a;
    }
    return a * factorial(a-1);
}

int main() {
    cout << "Hasil Pangkat : " << pangkat(2,21) << endl;
    cout << "Hasil Factorial : " << factorial(5) << endl;
    return 0;
}
