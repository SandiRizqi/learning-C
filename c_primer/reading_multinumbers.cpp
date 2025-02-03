#include <iostream>

using namespace std;


int main() {
    int sum = 0, v=0;

    //only read number, when not number print sum
    while (cin >> v)
        sum += v;
    cout << "Sum is: " << sum << std::endl;
    return 0;
}