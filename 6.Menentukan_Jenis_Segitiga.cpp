#include <iostream>
using namespace std;

int main() 
{
    // Membuat tipe data panjang sisi segitiga
    int s1, s2, s3;
    cout << "Masukkan 3 sisi segitiga:  " << endl;
    cin >> s1 >> s2 >> s3;
    
    // Menentukan jenis segitiganya
    if (s1 == s2 && s2 == s3) {
        cout << "Segitiga sama sisi" << endl;
    } else if (s1 == s2 || s2 == s3 || s1 == s3) {
        cout << "Segitiga sama kaki" << endl;
    } else {
        cout << "Segitiga sembarang" << endl;
    }
    
    return 0;
}
