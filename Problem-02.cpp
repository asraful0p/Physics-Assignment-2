#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double m = 3, wavelength = 530, theta = 65.0, a;

    
    wavelength = wavelength / 1e9; 
    theta = theta * 3.14416 / 180.0; 

    
    a = (m * wavelength ) / sin(theta);

    
    m = 2;
    wavelength = 700 / 1e9;
    double argument = m * wavelength / a; 
    if(argument >= -1 && argument <= 1) {
        theta = asin(argument); 
        theta = (theta * 180.0) / 3.1416; 
        cout << "Angle = " << theta << endl;
    }
    else {
        cout << "The value of asin is out of range[-1, 1]" << endl;
    }
    return 0;
}