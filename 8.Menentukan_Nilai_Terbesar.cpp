#include <iostream>
using namespace std;

int main() {
  // deklarasi variable suatu angka
    int angka_ke_satu, angka_ke_dua;
    
    //Menampilkan suatu angka
    cout << "Masukkan angka pertama: ";
    cin >> angka_ke_satu ;
    cout << " " << endl;
    cout << "Masukkan angka ke dua: ";
    cin >> angka_ke_dua;
    cout << endl;
    
    // Menentukan anagka mana yang paling besar
    if (angka_ke_satu > angka_ke_dua) {
      cout << angka_ke_satu << " adalah angka terbesar" << endl;
    } else if (angka_ke_dua > angka_ke_satu) {
      cout << angka_ke_dua << " adalah angka terbesar" << endl;
    } else {
      cout << "Tolong masukkan 2 angka yang berbeda !" << endl;
    }

    return 0;
}
