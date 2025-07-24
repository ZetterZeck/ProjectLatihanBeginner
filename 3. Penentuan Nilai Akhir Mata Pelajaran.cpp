#include <iostream>
using namespace std;

int main() {
  
  int matematika, bahasa_indonesia, bahasa_inggris;
  cout << "Masukkan nilai matematika: ";
  cin >> matematika;
  cout << "Masukkan nilai bahasa indonesia: ";
  cin >> bahasa_indonesia;
  cout << "Masukkan nilai bahasa inggris: ";
  cin >> bahasa_inggris;
  if (matematika < 0 || matematika > 100 || bahasa_indonesia < 0 || bahasa_indonesia > 100 || bahasa_inggris < 0 || bahasa_inggris > 100) {
    cout << "Nilai harus antara 0 dan 100. Silakan periksa input Anda." << endl;
  } else {
  double rata_rata = (matematika + bahasa_indonesia + bahasa_inggris) / 3.0;
  cout << "Nilai rata-rata: " << rata_rata << endl;
  if(rata_rata >=75) {
    cout << "Selamat Anda Lulus";
  } else {
    cout << "Maaf Anda Tidak Lulus";
  }
}  
}