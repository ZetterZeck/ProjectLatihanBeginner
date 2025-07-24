#include <iostream>
#include <iomanip> // Untuk mengatur presisi desimal
using namespace std;

int main() {
    // Deklarasi variabel mata uang
    int rupiah;
    cout << "Masukkan jumlah dalam Rupiah: ";
    cin >> rupiah;

    // Menghitung konversi
    float USD = rupiah / 14500.0;  // Pastikan nilai konversi menggunakan float 14500.0 maksudnya agar dibagi dengan tipe data float dan lebih akurat
    float euro = rupiah / 16000.0;

    // Menampilkan hasil konversi dengan 2 angka desimal
    cout << fixed << setprecision(2); // fixed digunakan agar angka desimal selalu ditampilkan dalam bentuk tetap (bukan notasi ilmiah), setprecision(2) memastikan bahwa hasil konversi ditampilkan dengan 2 angka di belakang koma, yang merupakan standar dalam konversi mata uang.
    cout << "USD: " << USD << endl;
    cout << "EUR: " << euro << endl;

    return 0;
}
