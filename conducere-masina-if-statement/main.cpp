#include <iostream>
using namespace std;

void can_you_drive(int age, bool has_car) {
    const int driving_age {16};
    
    if (age >= driving_age) {
        if (has_car) {
            cout << "Yes - you can drive!";
        } else {
            cout << "Sorry, you need to buy a car before you can drive!";
        }
        
    } else {
        cout << "Sorry, come back in " << driving_age - age << " years and be sure you own a car when you come back.";
    }
}

int main() {
    int age;
    bool has_car;
    
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Do you have a car? (1 for yes, 0 for no): ";
    cin >> has_car;
    
    can_you_drive(age, has_car);
    
    return 0;
}