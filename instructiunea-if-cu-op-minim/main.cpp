#include <iostream>
using namespace std;


int main()
{
    int a, b, c, min;

    cout << "a=";
    cin >> a;

    cout << "b=";
    cin >> b;

    cout << "c=";
    cin >> c;

    if ((a < b && a < c)) min = 1;

        else if ((b < a && b < c)) min = 2;
            else if ((c < a && c < b)) min = 3;

    /*if ((min == 1)) cout << "primul numar este cel mai mic";
        else if ((min == 2)) cout << "al doilea numar este cel mai mic";
            else if ((min == 3)) cout << "al treilea numar este cel mai mic"; 


    return 0;*/


    //metoda 2 cu switch
         switch (min)
        {
        case 1: cout << "primul numar este cel mai mic";
        break;
        case 2: cout << "al doilea numar este cel mai mic";
        break;
        case 3: cout << "al treilea numar este cel mai mic";
        break;
        }

    return 0; 
}
