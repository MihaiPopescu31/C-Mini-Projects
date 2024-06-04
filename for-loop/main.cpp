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
    for(int num1=1; num1 <=10; ++num1){
        for (int num2 = 1;num2<=10; ++num2){
            cout<<num1<<" * "<<num2<<" = "<<num1 * num2<<endl;
           
        }
        cout<<"-----------------"<<endl;
    }

    return 0;
}