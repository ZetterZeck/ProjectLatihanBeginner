#include <iostream>
using namespace std;

int main() {
  float jam;
  float total_biaya_parkir = 5000;
  cout << "Waktu parkir (dalam jam) : ";
  cin >> jam;
  if (jam < 0 || jam == 0) {
    cout << "Waktu parkir tidak bisa negatif dan nol." << endl;
  } else if (jam <= 2 && jam > 0) {
    cout << "Total biaya parkir: " << total_biaya_parkir << endl;
  } else {
    cout << "Total biaya parkir: " << total_biaya_parkir + (jam - 2) * 2000 << endl;
  }
}