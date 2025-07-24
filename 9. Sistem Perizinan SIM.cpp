#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel umur
    int umur;

    // Pemberitahuan dan meminta input umur
    cout << "Selamat datang di tempat pembuatan SIM!" << endl;
    cout << "Tolong masukkan umur Anda sesuai dengan Kartu Keluarga Anda: ";
    cin >> umur;

    // Menentukan apakah umur sesuai syarat atau tidak
    if (umur <= 0) {
        cout << "Tolong masukkan umur yang valid!" << endl;
    } else if (umur >= 17) {
        cout << "Anda berhak mendapatkan SIM!" << endl;
    } else {
        cout << "Anda tidak berhak mendapatkan SIM!" << endl;
    }

    return 0;
}
