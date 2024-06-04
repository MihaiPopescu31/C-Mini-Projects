#include <iostream>
using namespace std;

int main() {
   
    int n;
    cin >> n;
    
    if(n % 2 == 0)
    {
        
        cout<<"PAR";
    }
    else if (n % 2 == 1)
    {
        
        cout<<"IMPAR";
    }
    return 0;
}