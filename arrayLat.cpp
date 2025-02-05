#include <iostream>
#include <array>
#include <string>
using namespace std;

class Database {
    public:
        int ln;
        array<int, 10> nilai;

        Database(int inputLn) {
            Database::ln = inputLn;
        }
        
        void inputData() {
            cout << "Masukan Data Nilai : " << endl;
            for (int i= 0; i <= Database::ln; i++) {
                if (i== 0) {
                    cout << "Nilai dari" << endl;
                    cout << "0-9" << ":" << endl;
                } else if (i==ln) {
                    cout << "Nilai dari" << endl;
                    cout << "100" << ":" << endl;
                }else {
                    cout << "Nilai dari" << endl;
                    cout << i*10 << "-" << (i*10) + 9 << " :" << endl;
                }
                cin >> nilai[i];
            }
        }

        void makeStart(int starts) {
            for (int i=0; i<=starts; ++i) {
                cout << "*";
            }
        }

        

        void displayData() {
            for (int i= 0; i <= Database::ln; i++) {
                if (i== 0) {
                    cout << "0-9" << "  :";
                    Database::makeStart(nilai[i]);
                    cout << endl;
                } else if (i==ln) {
                    cout << "100" << "  :";
                    Database::makeStart(nilai[i]);
                    cout << endl;
                }else {
                    cout << i*10 << "-" << (i*10) + 9 << ":";
                    Database::makeStart(nilai[i]);
                    cout << endl;
                }
            }
        }

};

int main() {
    Database database(10);
    database.inputData();
    database.displayData();

    return 0;
}