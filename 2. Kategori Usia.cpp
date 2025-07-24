#include <iostream>
using namespace std;

int main() {
cout << "Selamat datang di Taman Kanak-kanak Cahaya Anak Bangsa!" << endl;
cout << "                                                       " << endl;
cout << "Berikut kategori usia sesuai anak anda untuk bermain: " << endl;
cout << "0-5 tahun: Balita" << endl;
cout << "6-12 tahun: Anak-anak" << endl;
cout << "13-17 tahun: Remaja" << endl;
cout << "18 tahun ke atas: Dewasa" << endl;
int usia;
cout << "Masukkan usia anda: ";
cin >> usia;
  if (usia < 0) {
    cout << "Usia tidak boleh kurang dari 0. Silakan periksa input Anda." << endl;
  } else {
    if (usia >= 0 && usia <= 5) {
      cout << "Anda termasuk dalam kategori balita" << endl;
    } else if (usia >= 6 && usia <= 12) {
      cout << "Anda termasuk dalam kategori Anak-anak" << endl;
    } else if (usia >= 13 && usia <= 17) {
      cout << "Anda termasuk dalam kategori Remaja" << endl;
    } else {
      cout << "Anda termasuk dalam kategori Dewasa" << endl;
      }
  }
                
}