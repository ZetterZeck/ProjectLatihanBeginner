#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel rasa
    int rasa;
    
    // Menampilkan pilihan rasa es krim
    cout << "Selamat datang di Toko Surga Es Krim!" << endl;
    cout << "Berikut pilihan rasa es krim terfavorit:\n1. Cokelat\n2. Vanilla\n3. Stroberi" << endl;
    cout << endl; // Menambahkan baris kosong untuk kerapihan
    
    // Meminta input dari pengguna
    cout << "Masukkan angka sesuai rasa yang Anda inginkan dari daftar menu: ";
    cin >> rasa;
    
    // Menentukan pilihan rasa
    if (rasa == 1) {
        cout << "Rasa pilihan kamu adalah cokelat." << endl;
    } else if (rasa == 2) {
        cout << "Rasa pilihan kamu adalah vanilla." << endl;
    } else if (rasa == 3) {
        cout << "Rasa pilihan kamu adalah stroberi." << endl;
    } else {
        cout << "Tolong masukkan angka yang valid dan yang ada pada daftar menu!" << endl;
    }

    return 0;
}
