#include <iostream>
using namespace std;

// Funcție pentru calculul factorialului
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1; // Conform convenției, 0! este 1
    } else {
        return n * factorial(n - 1); // Apel recursiv pentru calculul factorialului
    }
}

int main() {
    int numar;
    cout << "Introduceti un numar pentru a calcula factorialul: ";
    cin >> numar;

    // Verificare pentru numere negative
    if (numar < 0) {
        cout << "Factorialul nu este definit pentru numere negative." << endl;
    } else {
        // Calculul și afișarea factorialului
        unsigned long long rezultat = factorial(numar);
        cout << "Factorialul lui " << numar << " este: " << rezultat << endl;
    }

    return 0;
}
