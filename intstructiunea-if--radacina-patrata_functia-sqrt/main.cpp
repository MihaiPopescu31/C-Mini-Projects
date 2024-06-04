#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int radical = sqrt(n);
    if(radical * radical == n) cout << "DA";
    else cout << "NU";
    return 0;
}
