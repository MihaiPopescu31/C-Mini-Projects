#include <iostream>
using namespace std;

    int main(){
        
    int day_code{};
    
    cout<<"Please introduce the day of the week: "<<endl;
    cin>>day_code;
    
    switch(day_code){
    
    case 0: cout<<"Sunday"<<endl;
    break;
    case 1:cout<<"Monday"<<endl;
    break;
    case 2:cout<<"Tuesday"<<endl;
    break;
    case 3:cout<<"Wednesday"<<endl;
    break;
    case 4:cout<<"Thursday"<<endl;
    break;
    case 5:cout<<"Friday"<<endl;
    break;
    case 6:cout<<"Saturday"<<endl;
    break;
    default:cout<< "other:Error - illegal day code;";
    }
}