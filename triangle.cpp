#include <iostream>

using namespace std;

int main () {
    int leng = 10;
    
    //Pola 1
    for (int i = 0; i <= leng; ++i) {
         for( int j= 0; j <= i ;++j) {
             cout << "*";
         }
         cout << endl;
    }

    //Pola 2
    for (int i = 0; i <= leng; ++i) {\
        int space = leng - i;
         for( int j= 0; j <= space ;++j) {
             cout << " ";
         };
         for( int h= 0; h <= i ;++h) {
             cout << "*";
         }  
         cout << endl;
     }
    return 0;
}