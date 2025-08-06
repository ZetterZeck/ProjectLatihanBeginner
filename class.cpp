#include <iostream>
#include <string>;
using namespace std;

//Level 1: Simulator Karakter Sederhana
/* class karakter
{
public:

	std::string nama;
	int health = 0;
	int energi = 0;
	void run()
	{
		energi = energi - 20;
	}
};

//Level 2: Teka-Teki Penjaga gerbang
class gameKuis
{
public:

	std::string pertanyaan1 = "Penjaga Gerbang: Aku punya kota, tapi tak punya rumah. Aku punya gunung, tapi tak punya pohon. Aku punya air, tapi tak punya ikan. Siapakah aku?\n";
	
	std::string pertanyaan2 = "\nApa yang selalu datang, tapi tidak pernah tiba?\n";
	std::string pertanyaan3 = "\nMilikmu, tapi lebih sering digunakan orang lain. Apakah itu?\n";
	std::string jawaban1 = "peta"  ;
	std::string jawaban2 = "besok" ;
	std::string jawaban3 = "nama";
	std::string input1;
	std::string input2;
	std::string input3;
	

	
		
			
		
		

};*/

/*Level 3: Mesin Penjual Otomatis Ajaib
class mesinVending
{
public:
	// Menggunakan array untuk stok agar setiap item punya stok sendiri
	string jenisRamuan[6] = { " ", "1. Ramuan Kesehatan", "2. Ramuan Energi", "3. Ramuan Kebangkitan", "4. Ramuan Keberuntungan", "5. Ramuan Kekuatan" };
	int hargaRamuan[6] = { 0, 100, 200, 300, 400, 500 };
	int stokRamuan[6] = { 0, 10, 10, 10, 10, 10 };

	string jenisRoti[4] = { " ", "1. Roti Biasa", "2. Roti Isi Daging", "3. Roti Isi Sayuran" };
	int hargaRoti[4] = { 0, 50, 100, 75 };
	int stokRoti[4] = { 0, 7, 7, 7 };

	int koin = 0;

	// Fungsi untuk menampilkan item, menerima array nama, harga, dan stok
	void tampilkanMenu(string jenis[], int harga[], int stok[], int ukuran)
	{
		for (int i = 1; i < ukuran; ++i)
		{
			cout << jenis[i] << " (Harga: " << harga[i] << " | Stok: " << stok[i] << ")" << endl;
		}
	}

	// Fungsi untuk memproses transaksi, mengurangi koin dan stok
	bool prosesTransaksi(int pilihan, int harga[], int stok[])
	{
		if (stok[pilihan] <= 0)
		{
			cout << "Maaf, stok barang ini sudah habis!\n\n";
			return false;
		}
		if (koin >= harga[pilihan])
		{
			koin -= harga[pilihan];
			stok[pilihan]--;
			cout << "Anda berhasil membeli barang! Stok tersisa: " << stok[pilihan] << endl;
			cout << "Sisa koin Anda: " << koin << " koin.\n\n";
			return true;
		}
		else
		{
			cout << "Koin tidak cukup! Koin Anda: " << koin << ", Harga: " << harga[pilihan] << ".\n\n";
			return false;
		}
	}
};*/


int main()
{
	//Level 1: Simulator Karakter Sederhana
	/*karakter pertama;
	pertama.nama;
	pertama.health;
	pertama.energi;

	cout << "Karakter: ";
	cin >> pertama.nama;
	cout << "Karakter : " << pertama.nama << " dibuat." << endl;
	cout << "Kesehatan: ";
	cin >> pertama.health;
	cout << "Energi: ";
	cin >> pertama.energi;

	cout << "Apa yang harus " << pertama.nama << " lakukan? (makan/tidur/berlari) : ";
	std::string aksi;
	cin >> aksi;
	if (aksi == "makan" || aksi == "MAKAN" || aksi == "Makan")
	{
		cout << pertama.nama << " sedang makan." << "\n\n";
	}
	else if (aksi == "tidur" || aksi == "TIDUR" || aksi == "Tidur")
	{
		cout << pertama.nama << " sedang tidur." << "\n\n";
	}
	else if (aksi == "berlari" || aksi == "BERLARI" || aksi == "Berlari")
	{
		pertama.run();
		cout << pertama.nama << " berlari dan kehilangan 20 energi" << endl;
		cout << "Kesehatan: " << pertama.health << ", Energi: " << pertama.energi << "\n\n";

	}
	else
	{
		cout << "Aksi tidak dikenali." << "\n\n";
	}

	Level 2: Penjaga Gerbang

	gameKuis player;
	cout << "Penjaga Gerbang: Jawab teka-tekiku jika kau berani!\n";
	// Replace this line:
	// player.pertanyaan1;

	// With this line to actually call the function and display the question:
	cout << player.pertanyaan1;
	cout << "Jawabanmu : ";
	cin >> player.input1;
	if (player.input1 == player.jawaban1)
	{
		cout << "Penjaga Gerbang: Jawabanmu benar... Teka-teki selanjutnya!\n";

	}
	else
	{
		cout << "Jawaban Anda salah !\n";
		return 0;
	}

	cout << player.pertanyaan2;
	cout << "Jawabanmu : ";
	cin >> player.input2;
	if (player.input2 == player.jawaban2)
	{
		cout << "Penjaga Gerbang: Luar biasa! Satu lagi...\n";
	}
	else
	{
		cout << "Jawaban Anda salah !\n";
		return 0;
	}

	cout << player.pertanyaan3;
	cout << "Jawabanmu : ";
	cin >> player.input3;

	if (player.input3 == player.jawaban3)
	{
		cout << "Penjaga Gerbang: Kau bijaksana. Silakan lewat.\n";
	}
	else
	{
		cout << "Jawaban Anda salah !\n";
		return 0;
	}

	cout << "SELAMAT, ANDA MENANG!" << endl;
	cout << endl;*/

	//Level 3: Mesin Penjual Otomatis Ajaib
	/*
	  mesinVending pembeli;
    int pilihanMenuUtama = 0;

    while (true)
    {
        cout << "--- Mesin Penjual Ajaib ---\n";
        // Menampilkan jumlah koin saat ini dengan benar
        cout << "Koin Anda: " << pembeli.koin << " | Pilihan Anda:\n";
        cout << "[1] Beli Ramuan\n[2] Beli Roti\n[3] Masukkan Koin\n[4] Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihanMenuUtama;

        if (pilihanMenuUtama == 1) // Beli Ramuan
        {
            cout << "\n--- Pilih Ramuan ---\n";
            pembeli.tampilkanMenu(pembeli.jenisRamuan, pembeli.hargaRamuan, pembeli.stokRamuan, 6);
            
            int pilihanItem = 0;
            cout << "Masukkan nomor ramuan yang ingin dibeli (1-5): ";
            cin >> pilihanItem;

            if (pilihanItem >= 1 && pilihanItem <= 5)
            {
                pembeli.prosesTransaksi(pilihanItem, pembeli.hargaRamuan, pembeli.stokRamuan);
            }
            else
            {
                cout << "Pilihan tidak valid.\n\n";
            }
        }
        else if (pilihanMenuUtama == 2) // Beli Roti
        {
            cout << "\n--- Pilih Roti ---\n";
            pembeli.tampilkanMenu(pembeli.jenisRoti, pembeli.hargaRoti, pembeli.stokRoti, 4);

            int pilihanItem = 0;
            cout << "Masukkan nomor roti yang ingin dibeli (1-3): ";
            cin >> pilihanItem;
            
            if (pilihanItem >= 1 && pilihanItem <= 3)
            {
                pembeli.prosesTransaksi(pilihanItem, pembeli.hargaRoti, pembeli.stokRoti);
            }
            else
            {
                cout << "Pilihan tidak valid.\n\n";
            }
        }
        else if (pilihanMenuUtama == 3) // Masukkan Koin
        {
            int koinMasuk = 0;
            cout << "Berapa koin yang ingin Anda masukkan? ";
            cin >> koinMasuk;

            if (koinMasuk > 0)
            {
                pembeli.koin += koinMasuk;
                cout << "Koin berhasil ditambahkan. Koin Anda sekarang: " << pembeli.koin << "\n\n";
            }
            else
            {
                cout << "Jumlah koin tidak valid.\n\n";
            }
        }
        else if (pilihanMenuUtama == 4) // Keluar
        {
            cout << "Terima kasih telah menggunakan Mesin Penjual Ajaib!" << endl;
            break; // Keluar dari loop while(true)
        }
        else
        {
            cout << "Pilihan tidak valid. Tolong masukkan angka antara 1 dan 4.\n\n";
        }
    }

    return 0;
	*/

 

return 0;
}