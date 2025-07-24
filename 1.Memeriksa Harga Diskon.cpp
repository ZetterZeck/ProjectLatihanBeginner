#include <iostream>
using namespace std;

int main() {
  //diatas 100.000, diskon 10%
  //dibawah 100.000, atau ==100k tidak ada diskon
  int harga;
  cout << "Harga barang yang dibeli: " << endl;
  cin >> harga;
  if (harga > 100000) {
    cout << "Harga akhir setelah diskon: " << harga * 0.9 << endl; 
      
  } else if ( harga <= 100000){
    cout << "Harga akhir: " << harga << endl;
  }
}