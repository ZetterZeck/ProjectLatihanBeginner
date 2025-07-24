#include <iostream>
#include <string>
using namespace std;

int main() {
    // Deklarasi variabel golongan darah
    string golongan_darah;

    // Menampilkan daftar golongan darah
    cout << "Masukkan golongan darah Anda (A, B, AB, O): ";
    cin >> golongan_darah;

    // Menentukan jenis golongan darah yang diinput
    if (golongan_darah == "A" || golongan_darah == "a") {
        cout << "Golongan darah Anda adalah A." << endl;
    } else if (golongan_darah == "B" || golongan_darah == "b") {
        cout << "Golongan darah Anda adalah B." << endl;
    } else if (golongan_darah == "AB" || golongan_darah == "ab") {
        cout << "Golongan darah Anda adalah AB." << endl;
    } else if (golongan_darah == "O" || golongan_darah == "o") {
        cout << "Golongan darah Anda adalah O." << endl;
    } else {
        cout << "Golongan darah tidak dikenali. Masukkan salah satu dari A, B, AB, atau O." << endl;
    }

    return 0;
}
