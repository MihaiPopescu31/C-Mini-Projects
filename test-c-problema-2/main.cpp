#include <iostream>
using namespace std;

int main() {
    

    int numar1, numar2;

    cout << "Introduceti cele doua numere: ";
    cin >> numar1 >> numar2;

    // Calculam CMMDC
    int a = numar1, b = numar2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int cmmdc = a;

    // Calculam CMMNC
    int cmmnc = (numar1 * numar2) / cmmdc;

    cout << "CMMDC(" << numar1 << ", " << numar2 << ") = " << cmmdc << endl;
    cout << "CMMNC(" << numar1 << ", " << numar2 << ") = " << cmmnc << endl;

    return 0;
}
