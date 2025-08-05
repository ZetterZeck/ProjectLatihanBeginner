#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//Level 1: Simulator Karakter Sederhana
class karakter
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
	

	
		
			
		
		

};

//Level 3: Mesin Penjual Otomatis Ajaib
class mesinVending
{
public:
	std::string jenisRamuan[5] = { "1.Ramuan Kesehatan (100) - stok: 10\n", "2.Ramuan Energi (200) - stok: 10\n", "Ramuan Kebangkitan (300) - stok: 10\n", "Ramuan Keberuntungan (400) - stok: 10\n", "Ramuan Kekuatan (500) - stok: 10\n" };
	int stokRamuan = 10;
	int ramuan[5] = { 100, 200, 300, 400, 500 };
	int stokRoti = 7;
	std::string jenisRoti[3] = { "1.Roti Biasa (50) - stok: 7\n", "2.Roti Isi Daging (100) - stok: 7\n", "3.Roti Isi Sayuran (75) - stok: 7\n" };
	int koin = 0;
	int infut;
	int infut2;
	int infut3;
	int infut4;
	void stokRoti()
	{
		stokRoti--;
		cout << "Stok roti sekarang: " << stokRoti << endl;
	}
	void newRamuan()
	{
		stokRamuan--;
		cout << "Stok ramuan sekarang: " << stokRamuan << endl;
	}
	void newKoin()
	{
		koin += infut;
	}
	int kembalian()
	{
		koin = infut2 - ramuan[infut3];
		cout << "Kembalian Anda: " << koin;
	}
};

int main()
{
	//Level 1: Simulator Karakter Sederhana
	karakter pertama;
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

	/*Level 2: Penjaga Gerbang(masih ada masalah ketika string hasil() dilakukan dan saat salah satu if nya benar malah  
	langsung berhenti)*/
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
	cout << endl;

	//Level 3: Mesin Penjual Otomatis Ajaib
	mesinVending pembeli;
	while (true)
	{
		cout << "--- Mesin Penjual Ajaib ---\n";
		cout << " [1] Ramuan\n[2] Roti\n[3] Koin\nKoin Anda: 0 | Pilihan Anda: ";
		cin >> pembeli.infut4;

		if (pembeli.infut4 < 0 && pembeli.infut4 > 3)
		{
			cout << "Tolong masukkan angka dengan benar !\n\n";
			continue;
		}
		else if (pembeli.infut4 == 1)
		{

		}
		else if (pembeli.infut4 == 2)
		{

		}
		else
		{

		}
	}


	return 0;
}
