#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

  // Deschide fișierul text
  ifstream fin("carte_de_telefoane.txt");

  // Declară variabilele
  int numar_crt;
  string nume, prenume, telefon, adresa;

  // Citește prima linie (antet)
  getline(fin, nume);

  // Citește restul fișierului linie cu linie
  while (getline(fin, nume)) {

    // Extrage datele din linie
    getline(fin, prenume, ',');
    getline(fin, telefon, ',');
    getline(fin, adresa, '\n');

    // Afișează datele
    cout << numar_crt++ << ". " << nume << " " << prenume << endl;
    cout << "Telefon: " << telefon << endl;
    cout << "Adresa: " << adresa << endl << endl;
  }

  // Închide fișierul
  fin.close();

  return 0;
}
