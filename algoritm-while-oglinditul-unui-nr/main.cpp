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
    int nr, oglindit, uc;
    
    cout<<"nr= ";
    cin>>nr;

    while(nr!=0)
    {
        uc=nr%10;
        oglindit =oglindit*10 + uc;
        nr=nr/10;
        
    }
    
    cout<<"Oglinditul unui nr este = "<<oglindit;

    return 0;
}