#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;
        Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK) {
            Mahasiswa::nama = inputNama;
            Mahasiswa::NIM = inputNIM;
            Mahasiswa::jurusan = inputJurusan;
            Mahasiswa::IPK = inputIPK;
        }

};

class Person {
    public:
        int power;
        string name;
        int balance;
        Person(int inputPower, string inputName, int inputBalance) {
            Person::power = inputPower;
            Person::name = inputName;
            Person::balance = inputBalance;
        }

        void displayData () {
            cout << "Name :" << Person::name << endl;
            cout << "Power :" << Person::power << endl;
            cout << "Balance :" << Person::balance << endl;
        }


        void ubahNama(string newName) {
            Person::name = newName;
        }

        string getName() {
            return Person::name;
        }
};


int main() {
    //g++ main.cpp -o mainMahasiswa siswa1("Anugrah Sandi Rizqi", "12345556", "Kehutanan", 3.65);
    Person person1(10, "Sandi", 100);
    Person person2(15, "Sandi Rizqi", 150);
    person1.displayData();
    person2.displayData();

    person1.ubahNama("Paijo");
    person1.displayData();

    string name1 = person1.getName();
    cout << "Name :" << name1 << endl;

    return 0;
}