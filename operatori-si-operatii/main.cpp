/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
//adunare
	int a, b; //definire date de intrare
	int suma;
	cout << "Introdiuceti valoarea lui a= ";
	cin >> a;
	cout << "Introdiuceti valoarea lui b= ";
	cin >> b;
	suma = a + b;
	cout <<"Suma lui a + b este:"<< suma<<endl;


	//scadere

	int c, d; //date de intrare
	int diferenta;
	cout << "Valoare lui c= ";
	cin >> c;
	cout << "Valoare lui d= ";
	cin >> d;
	diferenta = c - d;
	cout << "diferenta dintre a - b "<<diferenta<<endl;



//inmultire
	int e, f; //date de intrare
	int inmultire;
	cout << "Valoare lui e= ";
	cin >> c;
	cout << "Valoare lui f= ";
	cin >> d;
	inmultire = c * d;
	cout << "inmultirea dintre e * f " << inmultire<<endl;

//impartire

	int g, h; //date de intrare
	int impartire;
	cout << "Valoare lui g= ";
	cin >> g;
	cout << "Valoare lui h= ";
	cin >> h;
	impartire = g / h;
	cout << "impartire dintre g / h " << impartire<<endl;


	//diverse
	int x, y, z;
	cout << "adunarea lui x+y+z";
	cout << "introduceti x";
	cin >> x;
	cout << "introduceti y";
	cin >> y;
	cout << "introduceti z";
	cin >> z;
	suma = x + y + z;
	cout << "adunarea dintre x+y+z " << suma;

	

    return 0;
}