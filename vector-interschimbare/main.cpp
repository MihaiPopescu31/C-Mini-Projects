#include <iostream>

using namespace std;

int main()
{

   //sa se sorteze crescator un vector folosind sortarea prin interschimbare


    int n, v[20], i, j, aux;


    cout<<"n= ";

    cin>>n;


    for(i=0;i<n;i++)
    {
        cout<<"v["<<i<<"]";
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

    cout<<"vectorul sortat crescator prin interschimbare este: "<<endl;

        for(i=0;i<n;i++)
            cout<<v[i]<<" ";


    return 0;
}

