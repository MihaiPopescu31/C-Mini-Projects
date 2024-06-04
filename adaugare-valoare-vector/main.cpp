#include<iostream>
using namespace std;


int main()
{

int n,v[20],i,element, poz1;


cout<<"n= ";
cin>>n;


for(i=0;i<n;i++)
    {
    cout<<"v["<<"]=";
    cin>>v[i];
    }

    cout<<endl;


for(i=0;i<n;i++)
    {
    cout<<v[i]<<" ";

    }
    cout<<endl;
    cout<<endl;


    cout<<"Elementul pe care doriti sa il adaugati =";
    cin>>element;


    cout<<"Pozitia la care va fi adaugat elementul este= ";
    cin>>poz1;


    for(i=n;i >= poz1;i-- )
        v[i+1]=v[i];

    n=n+1;

    v[poz1]=element;

    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl;



return 0;

}
