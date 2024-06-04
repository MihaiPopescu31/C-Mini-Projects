#include <iostream>

using namespace std;

int main()
{
    //se citeste un sir de numere de la tastatura si se cere suma sirului-vector


    int n, v[20], i, s1=0, s2=0, p1=1, p2=1;


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


     //Produsul

    for(i=0;i<n;i++)
     {
       p1 = p1*v[i];
     }


    cout<<"Produsul elementelor este "<<p1<<endl;



    //produs elemente impare

    for(i=1;i<n;i=i+2)

    {
        p2=p2*v[i];
    }

    cout<<"Produsul elementelor de pe pozitile impare este "<<p2<<endl;



    return 0;
}