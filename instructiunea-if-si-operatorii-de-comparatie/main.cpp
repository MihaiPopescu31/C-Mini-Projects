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
   int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
//valoare mai mare;
	cout << "a este mai mare decat b?" << endl;
	if(a > b)
		cout << "da,este mai mare";
	else 
		cout << "nu,este mai mare b" << endl;
	//valoare mai mica
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	if (a < b)
		cout << "da este mai mic";
	else
		cout << "nu,nu este mai mic";

	//==
	cout << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	if (a == b)
		cout << "da sunt egale";
	else
		cout << "nu sunt egale";

	//operatorul != diferit

	cout << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	if (a != b)
		cout << "da sunt diferite";
	else
		cout << "nu sunt diferite";

    return 0;
}