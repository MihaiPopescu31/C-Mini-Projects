

/*Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.*/

#include <iostream>

using namespace std;

int main()
{
   //Sa se verifice daca o secventa de n numere citite de la tastatura este in ordine crescatoatre


    int n, a, cresc=1,i=1 ,b;

    cout<<"n= ";
    cin>>n;

    cout<<"a= ";
    cin>>a;


    while(i<n && cresc==1)
    {
        cout<<"b= ";
        cin>>b;

        if(b < a)
        {
            cresc=0;
        }
    a=b;

    i++;
    }
    if(cresc==1) cout<<"Secventa crescatoare";
        else cout<<"Secventa nu e crescatoare";


    return 0;
}
