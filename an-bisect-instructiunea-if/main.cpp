
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    n<=2500;
    
    if(n % 4 == 0 && n % 100 != 0 || n % 400 == 0){
        cout<<"DA";
    }

    else 
    {
        cout<<"NU";
    }
    return 0;
}