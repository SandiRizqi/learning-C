#include <iostream>
#include "math.h"

using namespace std;

void displayData(int d) {
    cout << "Data adalah " << d << endl;
}

int main() {
    int a = 10;
    int b = 34;

    int result = add(a, b);
    int subs_result = subs(a,b);
    displayData(result);
    displayData(subs_result);

    return 0;
}