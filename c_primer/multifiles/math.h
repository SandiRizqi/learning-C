
#include <iostream>

using namespace std;



int add(int a, int b) {
    return a + b;
}

int subs(int a, int b) {
    if (b>a) {
        throw runtime_error("a value should be bigger.");
    };
    return a-b;
}