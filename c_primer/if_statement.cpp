#include <iostream>

using namespace std;

int main()
{
    int currVal = 0, val = 0;
    int cnt = 0;
    cout << "Masukan angka :" << endl;
    if (cin >> currVal) {
        while (cin >> currVal)
        {

            if (!val) {
                val = currVal;
            }

            if (currVal == val) {
                cnt += 1;
            }
            else {
                cout << "the count of " << val << " is "
                    << cnt << " times " << endl;
                val = currVal;
                cnt = 1;
            }
        };

        
    }

    return 0;
}