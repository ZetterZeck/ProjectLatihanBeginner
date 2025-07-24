#include <iostream>
#include <string>
#include <iomanip> // Untuk manipulasi output, seperti hex
using namespace std;

// Fungsi untuk menampilkan data Pokémon
// Materi: void
void tampilkanDataPokemon(string nama, string tipe, char kategori, unsigned short int nomor,
                          long int trainerID, double berat, float tinggi, bool isShiny, bool isLegendary) {
    cout << "--- POKEDEX ENTRY ---" << endl;
    cout << "Nama: " << nama << endl;
    cout << "Tipe: " << tipe << endl;
    cout << "Kategori: " << kategori << endl;
    cout << "Nomor Pokedex: " << nomor << endl;

    // Materi: Number Systems (menampilkan Trainer ID dalam format Heksadesimal)
    cout << "Trainer ID (DEC): " << trainerID << endl;
    cout << "Trainer ID (HEX): " << hex << trainerID << endl;
    cout << dec; // Mengembalikan format ke desimal

    cout << "Berat: " << berat << " kg" << endl;
    cout << "Tinggi: " << tinggi << " m" << endl;

    // Materi: Booleans
    cout << "Shiny: " << (isShiny ? "Ya" : "Tidak") << endl;
    cout << "Legendary: " << (isLegendary ? "Ya" : "Tidak") << endl;
    cout << "---------------------" << endl;
}

// Fungsi untuk menampilkan aksi serangan
// Materi: void
void lakukanSerangan(string penyerang, string target) {
    cout << penyerang << " menggunakan Thunderbolt pada " << target << "!" << endl;
    
}

int main() {
    // Definisi Pokémon Anda (Pikachu)
    // Materi: Characters And Text, Integers, Assignments, Integer Modifiers, Fractional Numbers, Booleans
    string namaPokemon = "Pikachu";
    string tipePokemon = "Electric";
    char kategori = 'S';
    unsigned short int nomorPokedex = 25;
    long int trainerID = 123456789;
    double berat = 6.0;
    float tinggi = 0.4f;
    bool isShiny = false;
    bool isLegendary = false;

    // Statistik pertarungan Pikachu
    int level = 5;
    int healthPoints = 20;
    int attack = 10;
    int defense = 5;

    // Tampilkan data Pokémon Anda
    tampilkanDataPokemon(namaPokemon, tipePokemon, kategori, nomorPokedex, trainerID, berat, tinggi, isShiny, isLegendary);

    // --- Simulasi Pertarungan ---
    cout << "\n--- SIMULASI PERTARUNGAN ---" << endl;

    // Definisi Pokémon Musuh (Charmander)
    int musuhHP = 25;
    int musuhDefense = 7;
    string musuhNama = "Charmander";

    // Lakukan serangan
    lakukanSerangan(namaPokemon, musuhNama);

    // Kalkulasi Damage
    // Materi: auto, long double
    long double crit_multiplier = 1.5025L; // 'L' untuk long double
    
    // Formula damage standar di Pokémon
    auto finalDamage = ((((2 * level / 5 + 2) * attack * 60 / musuhDefense) / 50) + 2) * crit_multiplier;

    cout << "Damage yang dihasilkan: " << finalDamage << endl;
    
    // Hitung sisa HP musuh
    double sisaMusuhHP = musuhHP - finalDamage;

    // Pastikan HP tidak kurang dari 0
    if (sisaMusuhHP < 0) {
        sisaMusuhHP = 0;
    }

    cout << "Sisa HP " << musuhNama << " adalah: " << sisaMusuhHP << endl;

    return 0;
}