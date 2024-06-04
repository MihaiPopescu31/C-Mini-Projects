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
    
//inserare si eliminare elemente vectori

   int n=0, v[20], i, element, poz1, poz2;

    cout<<"n= ";
    cin>>n;


    for(i=0;i<n;i++)
    {

        cout<<"v["<<i<<"]=";
        cin>>v[i];

    }

    cout<<endl;

    for(i=0;i<n;i++)
         cout<<v[i]<<" ";


    cout<<endl;
    cout<<endl;


    //sa se elimine un element de pe o pozitie data


    cout<<"Elementul pe care doriti sa il adaugati = ";
    cin>>element;

    cout<<"Pozitia la care va fi adaugat elementul este = ";
    cin>>poz1;

    for(i=n;i>=poz1;i--)
        v[i+1]=v[i];

    n = n+1;

    v[poz1]=element;


    for(i=0;i<n;i++)
        cout<<v[i]<<" ";


    cout<<endl;
//sa se elimine un element de pe pozitia data

    cout<<"Pozitia de pe care sa fie eliminat elementul = ";
    cin>>poz2;

    for(i=poz2;i<=n;i++)
        v[i]=v[i+1];

    n=n-1;

    for(i=0;i<n;i++)
        cout<<v[i]<<" ";








    return 0;
}

