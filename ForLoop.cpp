#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	// 1. Segitiga siku-siku (paling ez)
	int j;
	cout << "\nMasukkan angka: ";
	cin >> j;
	
	for (int i = 1; i <= j; i++)
	{
		for (int k = 1; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	} 
	cout << endl;

	// 2. Piramida Simetris
	int m;
	cout << "Tolong masukkan angka: ";
	cin >> m;
	for (int l = 1; l <= m; l++)
	{
		for (int n = l; n <= m - 1; n++)
		{
			cout << " ";

		}// untuk bintang awal
		for (int z = 1; z <= l; z++)
		{
			cout << "*";
		}//untuk bintang selanjutnya
		for (int y = 1; y <= l - 1; y++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	// 3. Pola Berlian Penuh (ini sama gemini dana paling susah njay)
		int y;

		// Meminta input dari pengguna
		std::cout << "Masukkan tinggi berlian (gunakan angka ganjil): ";
		std::cin >> y;

		// Bagian Atas Berlian (Termasuk bagian tengah)
		// Loop luar untuk mengatur baris
		for (int uh = 0; uh <= y / 2; uh++) {
			// Loop untuk mencetak spasi di awal
			// Jumlah spasi berkurang seiring bertambahnya baris
			for (int j = 0; j < y / 2 - uh; j++) {
				std::cout << " ";
			}
			// Loop untuk mencetak bintang
			// Jumlah bintang bertambah 2 di setiap baris
			for (int j = 0; j < 2 * uh + 1; j++) {
				std::cout << "*";
			}
			// Pindah ke baris baru
			std::cout << std::endl;
		}

		// Bagian Bawah Berlian
		// Loop luar untuk mengatur baris, berjalan mundur
		for (int i = y / 2 - 1; i >= 0; i--) {
			// Loop untuk mencetak spasi di awal
			// Jumlah spasi bertambah seiring berkurangnya baris
			for (int j = 0; j < y / 2 - i; j++) {
				std::cout << " ";
			}
			// Loop untuk mencetak bintang
			// Jumlah bintang berkurang 2 di setiap baris
			for (int j = 0; j < 2 * i + 1; j++) {
				std::cout << "*";
			}
			// Pindah ke baris baru
			std::cout << std::endl;
		}
		cout << endl;
		//4. Bingkai Kotak Berlubang
		cout << "Masukkan angka untuk tinggi bingkai: ";
		cin >> j;
		for (int i = 1; i <= j; i++)
		{
			cout << "*";
		}

		for (int l = 1; l <= j - 2; l++)
		{
			cout << "\n**";
		}
		cout << endl;
		for (int s = 1; s <= j; s++)
		{
			cout << "*";
		}
		cout << endl;

		//5. Papan Perkalian Terformat 
		cout << "Masukkan angka untuk papan perkalian: ";
		cin >> j;
		for (int i = 1; i <= j; i++)
		{
			for (int k = 1; k <= j; k++)
			{
				cout << i * k << "\t"; // Menggunakan tab untuk pemisah
			}
			cout << endl;
		}
		cout << endl;
		//6 segitiga siku-siku terbalik
		cout << "Masukkan angka: ";
		cin >> j;
		for (int i = 1; i <= j; i++)
		{
			for (int k = 5; k >= i; k--)
			{
				cout << "*";
			}
			cout << endl;
		}
	return 0;
}
