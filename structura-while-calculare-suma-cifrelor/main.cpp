/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//calculare suma cifrelor unui numar citit de la tastatura
#include <iostream>

using namespace std;

int main()
{
    int n, uc, suma=0;
    
    cout<<"n= ";
    cin>>n;
    
    while(n!=0)
    {
    uc=n%10;
    suma=suma+uc;
    n=n/10;
    }
    
    cout<<"Suma cifrelor unui numar este egala cu"<<suma;
    
    
    return 0;
}