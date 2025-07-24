#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Fungsi untuk konversi bilangan (Number Systems, Integers, Integer Modifiers)
string convertToBase(long num, int base) {
    string digits = "0123456789ABCDEF";
    string result = "";
    unsigned long unum = (unsigned long)num; // Integer Modifier
    if (num == 0) return "0";
    while (unum > 0) { // Loop hanya untuk konversi
        result = digits[unum % base] + result;
        unum /= base;
    }
    return result;
}

// Misi Dekode Mantra
void decodeSpellQuest(int& adventurePoints, string playerName) {
    long num = rand() % 100 + 1; // Bilangan acak 1-100
    int baseChoice = rand() % 3;
    int base = (baseChoice == 0) ? 2 : (baseChoice == 1) ? 8 : 16;
    cout << ">>> " << playerName << ", kamu menemukan gulungan mantra dengan kode " << num << "!\n";
    cout << ">>> Dekode ke basis " << base << ": ";
    string userAnswer;
    cin >> userAnswer;
    auto correctAnswer = convertToBase(num, base); // Auto
    if (userAnswer == correctAnswer) {
        cout << ">>> Mantra berhasil didekode! +10 poin.\n";
        adventurePoints += 10; // Assignments
    } else {
        cout << ">>> Mantra gagal. Kode benar: " << correctAnswer << "\n";
    }
    short s = num; // Integer Modifier
    cout << ">>> Kode sebagai short: " << s << " (batas: " << SHRT_MAX << ")\n";
}

// Misi Ramuan Presisi (Fractional Numbers)
void potionPrecisionQuest(int& adventurePoints, string playerName) {
    double input = (rand() % 100) / 10.0; // Pecahan acak 0.0-9.9
    float f = input;
    double d = input;
    long double ld = input;
    f *= 3.0f; d *= 3.0; ld *= 3.0L; // Assignments
    cout << ">>> " << playerName << ", campur ramuan dengan dosis " << fixed << setprecision(2) << input << " dikalikan 3!\n";
    cout << ">>> Berapa hasilnya? ";
    double userAnswer;
    cin >> userAnswer;
    if (abs(userAnswer - d) < 0.001) {
        cout << ">>> Ramuan sempurna! +10 poin.\n";
        adventurePoints += 10; // Assignments
    } else {
        cout << ">>> Ramuan gagal. Hasil benar: " << fixed << setprecision(2) << d << "\n";
    }
    cout << fixed << setprecision(10);
    cout << ">>> Presisi - Float: " << f << ", Double: " << d << ", Long Double: " << ld << "\n";
}

// Misi Gerbang Logika (Booleans)
void logicGateQuest(int& adventurePoints, string playerName) {
    bool a = rand() % 2;
    bool b = rand() % 2;
    char op = (rand() % 2) ? '&' : '|';
    cout << ">>> " << playerName << ", gerbang logika membutuhkan kunci " << a << (op == '&' ? " AND " : " OR ") << b << ".\n";
    cout << ">>> Apa hasilnya? (0/1): ";
    int userAnswer;
    cin >> userAnswer;
    bool result = (op == '&') ? (a && b) : (a || b);
    if (userAnswer == result) {
        cout << ">>> Gerbang terbuka! +10 poin.\n";
        adventurePoints += 10; // Assignments
    } else {
        cout << ">>> Gerbang terkunci. Jawaban benar: " << result << "\n";
    }
}

// Misi Rahasia Teks (Characters and Text)
void textSecretQuest(int& adventurePoints, string playerName) {
    char c = 'A' + rand() % 26; // Karakter acak A-Z
    cout << ">>> " << playerName << ", temukan karakter rahasia dengan kode ASCII " << (int)c << "!\n";
    cout << ">>> Karakter apa itu? ";
    char userChar;
    cin >> userChar;
    if (userChar == c) {
        cout << ">>> Rahasia terungkap! +10 poin.\n";
        adventurePoints += 10; // Assignments
    } else {
        cout << ">>> Rahasia tersembunyi. Karakter benar: " << c << "\n";
    }
    cin.ignore();
    cout << ">>> Masukkan nama tim petualang: ";
    string teamName;
    getline(cin, teamName);
    teamName += " Saga"; // Assignments
    cout << ">>> Nama tim: " << teamName << "\n";
}

// Fungsi void untuk menampilkan menu (void)
void showMenu() {
    cout << "\n*** Selamat datang di Pixel Quest: Code Saga! ***\n";
    cout << ">>> Pilih misi petualanganmu:\n";
    cout << "1. Misi Dekode Mantra\n";
    cout << "2. Misi Ramuan Presisi\n";
    cout << "3. Misi Gerbang Logika\n";
    cout << "4. Misi Rahasia Teks\n";
    cout << "5. Tinggalkan Petualangan\n";
    cout << ">>> Pilih misi: ";
}

int main() {
    srand(time(0)); // Inisialisasi seed acak
    auto adventurePoints = 0; // Auto
    auto choice = 0; // Auto
    cout << "*** Masukkan nama petualang: ";
    string playerName;
    cin >> playerName;
    cout << ">>> Selamat datang, " << playerName << "!\n";

    showMenu();
    cin >> choice;

    if (choice == 1) {
        decodeSpellQuest(adventurePoints, playerName);
    }
    else if (choice == 2) {
        potionPrecisionQuest(adventurePoints, playerName);
    }
    else if (choice == 3) {
        logicGateQuest(adventurePoints, playerName);
    }
    else if (choice == 4) {
        textSecretQuest(adventurePoints, playerName);
    }
    else if (choice == 5) {
        cout << ">>> " << playerName << " meninggalkan petualangan.\n";
    }
    else {
        cout << ">>> Pilihan tidak dikenal di dunia ini!\n";
    }

    cout << "*** Poin petualangan " << playerName << ": " << adventurePoints << " ***\n";
    cout << "*** Petualangan selesai! ***\n";

    return 0;
}