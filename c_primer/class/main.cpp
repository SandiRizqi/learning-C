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


int main() {
    Mahasiswa siswa1("Anugrah Sandi Rizqi", "12345556", "Kehutanan", 3.65);
    cout << "Nama dari siswa adalah " << siswa1.nama << endl;
    cout << "NIM dari siswa adalah " << siswa1.NIM << endl;
    cout << "Jurusan dari siswa adalah " << siswa1.jurusan << endl;
    cout << "IPK dari siswa adalah " << siswa1.IPK << endl;
    return 0;
}