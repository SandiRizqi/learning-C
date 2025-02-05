#include <iostream>

using namespace std;


int kuadrat(int *b, int c) {
    if(c>1) {
        *b = (*b) * kuadrat(b, (c-1)); 
        return  *b;
    } else {
        return *b;
    }    
}


int main(){
    int a = 4;
    cout << "Nilai a : " << a << endl;
    cout << "Address a: " << &a << endl;
    kuadrat(&a, 4);
    cout << "Nilai a : " << a << endl;
    cout << "Address a: " << &a << endl;
    return 0;
}

