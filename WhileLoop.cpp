#include <iostream>
#include <cstdlib> // Diperlukan untuk fungsi rand() dan srand()
#include <ctime>   // Diperlukan untuk fungsi time()

int main() {
    // Memberi 'seed' pada generator angka acak agar hasilnya berbeda setiap kali dijalankan
    srand(time(0));

    // Inisialisasi variabel yang diperlukan
    int anakPanah = 10;
    int totalSkor = 0;
    int nomorTembakan = 1;

    // Menampilkan pesan pembuka
    std::cout << "Sesi Latihan Memanah Dimulai! Anda punya 10 anak panah." << std::endl << std::endl;

    // Loop akan terus berjalan selama pemanah masih memiliki anak panah
    while (anakPanah > 0) {
        // Menghasilkan skor acak dari 0 hingga 10
        int skor = rand() % 11;

        std::cout << "Tembakan " << nomorTembakan << "... ";

        // Memeriksa apakah tembakan kena atau meleset menggunakan if-else
        if (skor == 0) {
            std::cout << "MELESET! Skor: 0.";
        }
        else {
            std::cout << "KENA! Skor: " << skor << ".";
        }

        // Menambahkan skor dari tembakan ini ke total skor
        totalSkor += skor;

        // Mengurangi jumlah anak panah
        anakPanah--;

        // Menampilkan sisa anak panah
        std::cout << " (Sisa " << anakPanah << " anak panah)" << std::endl;

        // Menaikkan nomor tembakan untuk iterasi berikutnya
        nomorTembakan++;
    }

    // Menampilkan pesan penutup dan hasil akhir setelah loop selesai
    std::cout << "\nLatihan selesai!" << std::endl;
    std::cout << "Total Skor yang Anda kumpulkan: " << totalSkor << std::endl;

    return 0;
}