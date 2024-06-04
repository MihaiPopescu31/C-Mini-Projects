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
  int n, prim, d;
  
  cout<<"n= ";
  cin>>n;
  
  prim = 1;
  d = 2;
  
  while(d<=n/2)
  {
    if(n % d == 0) prim=0;  
      d = d + 1;//d++
      
  }

    if(prim = 1) cout<<"nr este prim";
        else cout<<"Nr NU este prim";
    
    return 0;
}