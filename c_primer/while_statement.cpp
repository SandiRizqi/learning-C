#include <iostream>

using namespace std;

int main () {
    int max = 100;
    int start = 0 ;

    int sum = 0, v1= start;
    while (v1 <= max) {
        sum += v1;
        v1 += 1;
    };
    cout << "The sum between " << start
     << " and " << max << " = " << sum << endl;
     return 0;
}