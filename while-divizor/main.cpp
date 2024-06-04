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
    int n, p, f;
    
    cout<<"n= ";
    cin>>n;
    
    f = 2;
    p = 0;
    
    while(n >= f)
    {
        if(n % f == 0)
        {
            n = n / f;
            p++;
        }
        else if(p > 0)
        {
            cout<<f<<"la puterea "<<p<<endl;
            p = 0;
        }
        
        f++;
           
        
    }
        if(p>0)
        {
            cout<<f<<"la puterea"<<p<<endl;
            p = 0;
        }
        

    
    

    return 0;
}
