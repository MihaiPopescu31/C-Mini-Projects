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
    //se citeste un sir de numere de la tastatura si se cere suma sirului-vector


    int n,v[20],i,s1=0,s2=0;


    cout<<"n= ";

    cin>>n;

    for(i=0;i<n;i++)

    {

       cout<<"v["<<i<<"]=";
       cin>>v[i];


    }
     cout<<endl;


    for(i=0;i<n;i++)
    {
     cout<<v[i]<<" "<<endl;
    }



    for(i=0;i<n;i++)
        {
          s1=s1+v[i];
        }

    cout<<"Suma elementelor este "<<s1<<endl;


    for(i=0;i<n;i=i+2)
    {
      s2 =s2+v[i];
    }

     cout<<"Suma elementelor de pe pozitiile pare este "<<s2<<endl;


    return 0;
}
