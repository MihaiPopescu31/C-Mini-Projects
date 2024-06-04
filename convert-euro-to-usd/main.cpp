
#include <iostream>
using namespace std;
//convert EUR TO USD

int main()
{
    
const double usd_per_eur{0.90};

cout<<"Welcome to USD to EUR converted<<endl";
cout<<"Enter the value in EUR:";

double euros {0.0};
double dollars {0.0};

cin>>euros;
dollars = euros * usd_per_eur;

cout<<euros<<"euros is equivalent to " <<dollars<<"dollars"<<endl;

cout<< endl;

    return 0;
}
