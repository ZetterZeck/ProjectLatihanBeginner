#include <iostream>
#include <algorithm> // Untuk menggunakan transform
#include <string>    // Untuk menangani string
using namespace std;

int main() {
    // Input positif dan negatif
    string HasilTes;
    cout << "Masukkan hasil tes (positif/negatif): ";
    cin >> HasilTes;

    // Mengubah input menjadi huruf kecil agar lebih fleksibel
    transform(HasilTes.begin(), HasilTes.end(), HasilTes.begin(), ::tolower);

    if (HasilTes == "positif") {
        cout << "Harus karantina" << endl;
    } else if (HasilTes == "negatif") {
        cout << "Tidak perlu karantina" << endl;
    } else {
        cout << "Masukkan hasil tes dengan benar agar terbaca oleh sistem kami" << endl;
    }

    return 0;
}
