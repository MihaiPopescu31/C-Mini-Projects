#include <iostream>
 using namespace std;

int main() {

    int a, b, c;

    cout << "Introduceti valorile pentru a, b, si c: ";
    cin >> a >> b >> c;

    // in Ordine crescatoare
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    cout << "Numere in ordine crescatoare: " << a << ", " << b << ", " << c << endl;

    // in Ordine descrescatoare
    if (c > b) swap(c, b);
    if (b > a) swap(b, a);
    if (c > b) swap(c, b);
    cout << "Numere in ordine descrescatoare: " << a << ", " << b << ", " << c << endl;


// Cifrele pare din a
    cout << "Cifre pare din a: ";
    while (a > 0) {
        int cifra = a % 10;
        if (cifra % 2 == 0) {
            cout << cifra << " ";
        }
        a /= 10;
    }
    cout << endl;

    // Cifre impare din b
    cout << "Cifre impare din b: ";
    while (b > 0) {
        int cifra = b % 10;
        if (cifra % 2 == 1) {
            cout << cifra << " ";
        }
        b /= 10;
    }
    cout << endl;

    // Suma cifrelor impare din c
    int sumaCifreImpareC = 0;
    while (c > 0) {
        int cifra = c % 10;
        if (cifra % 2 == 1) {
            sumaCifreImpareC += cifra;
        }
        c /= 10;
    }
    cout << "Suma cifrelor impare din c: " << sumaCifreImpareC << endl;

    return 0;
}
