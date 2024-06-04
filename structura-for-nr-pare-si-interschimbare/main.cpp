/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//se citesc doua numere de la tastatura
//se cere afisarea tuturor numerelor pare dintre cele 2 valori-impartirea la 2

#include <iostream>

using namespace std;

int main()
{
    int a, b, i, aux;
    
    cout<<"a= ";
    cin>>a;
    
    cout<<"b= ";
    cin>>b;
    
    if(a>b)
    {
    aux=b;
    b=a;
    a=aux;
    
    }
    
    
    for(i=a;i<=b;i++)
        if(i % 2 == 0) cout<<i<<" ";
        
        
    
    

    return 0;
}