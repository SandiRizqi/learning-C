#include <iostream>

using namespace std;


int main() {
    int start = -100;
    int max = 100;
    int sum=0;

    // for loop function
    for (int val = start; val<=max; ++val) {
        sum += val;
    }
    //print the total value
    cout << "Total value between " << start << " and "
     << max << " = " << sum << endl;
    return 0;
}