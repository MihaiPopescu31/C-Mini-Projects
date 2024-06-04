#include <iostream>
using namespace std;


int main()
{
    int a, b, c, max;

    cout << "a= ";
    cin >> a;

    cout << "b= ";
    cin >> b;

    cout << "c= ";
    cin >> c;

    if ((a > b) && (a > c)) max = 1;

    else if ((b > a) && (b > c)) max = 2;

    else if ((c > a) && (c > b)) max = 3;



    /*if ((max == 1)) cout << "primul numar este cel mai mare";
        else if((max==2)) cout<<"al doilea numar este cel mai mare";
            else if((max==3)) cout<<"al treilea numar este cel mai mare";*/





    //metoda 2 cu switch
    switch (max)
    {
    case 1: cout << "primul numar este cel mai mare";
        break;
    case 2: cout << "al doilea numar este cel mai mare";
        break;
    case 3: cout << "al treilea numar este cel mai mare";
        break;
    }
        return 0;

}
