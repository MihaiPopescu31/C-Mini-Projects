/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{

 
    //sa se determine cel mai mare numar dintr-o secventa de n numere date

    int n, a, max,i ;

    cout<<"n= ";
    cin>>n;

    cout<<"a= ";
    cin>>a;

    max=a;

    for(i=2; i<=n; i++)
    {
        cout<<"a= ";
        cin>>a;
        if(max < a) max = a;
    }
    cout<<"Maximul este "<<max;



    return 0;
}
