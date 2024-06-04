/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

int main()
{
    int a, b;
    
        cout<<"a= ";
        cin>>a;
    
        cout<<"b= ";
        cin>>b;
    
    while(a!=b)
    {
     if(a>b) a=a-b;
        else b=b-a;
        
    }
    
    cout<<"CMMDC celor doua numere este "<<a;

    return 0;
}
