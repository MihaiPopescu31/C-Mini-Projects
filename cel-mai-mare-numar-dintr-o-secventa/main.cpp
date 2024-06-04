
#include <iostream>

using namespace std;

int main()
{
    int n,a,max;
    
    cout<<"n= ";
    cin>>n;
    
    cout<<"a= ";
    cin>>a;
    
    max = a;
    
    for ( int i=2;i<=n;i++){
       cout<<"a= ";
       cin>>a;
        
        if(max<a) max = a;
        
    }
    
    cout<<"Maximul este "<<max;
    
    
    return 0;
}