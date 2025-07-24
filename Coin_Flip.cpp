// Paste code here 💖
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  srand(time(NULL));

  int Num = std::rand() % 2;  // Generates a random number that's either 0 or 1

  if (Num > 0.5) { 
    cout << "Heads\n";
  }
  else { 
    cout << "Tails\n";
  }
}