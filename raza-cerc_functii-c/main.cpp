#include <iostream>

using namespace std;

const double pi{3.14159};

double calc_area_circle(double radius){
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height){
    //return pi * radius * radius * height;
    return calc_area_circle(radius) * height;

}

void area_circle(){
    double radius{};
    cout << "\nIntroduceți raza cercului: ";
    cin >> radius;
    cout << "Aria unui cerc cu raza " << radius << " este " << calc_area_circle(radius) << endl;
}

void volume_cylinder(){
    double radius, height;
    cout << "\nIntroduceți raza și înălțimea cilindrului: ";
    cin >> radius >> height;
    cout << "Volumul unui cilindru cu raza " << radius << " și înălțimea " << height << " este " << calc_volume_cylinder(radius, height) << endl;
}

int main(){
    area_circle();
    volume_cylinder();
    
    return 0;
}
