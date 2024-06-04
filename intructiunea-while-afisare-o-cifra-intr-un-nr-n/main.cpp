/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

// sa se afiseze de cate ori apare cifra x intr-un numar n citit de la tastatura;

#include <iostream>

using namespace std;

int main()
{
   int n, x, nr_ap=0;
   
   cout<<"n= ";
   cin>>n;
   
   cout<<"x= ";
   cin>>x;
   
   
  while(n!=0)
  {
    if(n%10 == x) nr_ap++;
    n=n/10;
    
  }
  
  cout<<"Numarul de aparitii a cifrei "<<x<<" este "<<nr_ap;

    return 0;
}