#include <iostream>

using namespace std;

int main()
{
    int n, v[21], i, j, aux;

    cout<<"n= ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];

    }


    for(i=0;i<n;i++)
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
            {
                if(v[j]<v[i])
                {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
                }

        }

    cout<<"Vectorul sortat crescator (interschimbare) este:"<<endl;

        for(i=0;i<n;i++)
            cout<<v[i]<< " ";

//sa se sorteze crescator un vectoe folosind buble sort

    /*int n,v[20],i, j, aux, ok;

    cout<<"n= ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];

    }

        do{
            ok=1;

        for(i=0;i<n;i++)
            {
            if(v[i]>v[i+1])
                {
            aux=v[i];
            v[i]=v[i+1];
            v[i+1]=aux;
            ok=0;
                }
            }


        }

        while(!ok);


        cout<<"Vectorul sortat crescator (bublesort) este:"<<endl;

        for(i=0;i<n;i++)
        cout<<v[i]<< " ";*/

    return 0;
}
