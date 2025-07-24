#include <iostream>
#include <algorithm> // Untuk menggunakan max()
using namespace std;

int main() {
    int a, b, c;
    
    // Meminta input dari pengguna
    cout << "Masukkan angka ke-1: ";
    cin >> a;
    cout << "Masukkan angka ke-2: ";
    cin >> b;
    cout << "Masukkan angka ke-3: ";
    cin >> c;

    // Menentukan nilai terbesar
    if (a == b && b == c) {
        cout << "Semua bilangan tersebut sama" << endl;
    } else {
        int tertinggi = max(a, max(b, c));  // Menggunakan max() untuk mencari yang terbesar, gunakan max() secara berulang bagi bilangan lebih dari 2
        cout << "Bilangan terbesar adalah " << tertinggi << endl;
    }
    
    return 0;
}
