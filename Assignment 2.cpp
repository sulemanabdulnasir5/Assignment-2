#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
double celsius;
cout << "Enter temperature in Celsius: ";
cin >> celsius;
double fahrenheit = (celsius * 1.8) + 32;
cout << fixed << setprecision(2);
cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
if (celsius < 0) {
cout << "Freezing!" << endl;
}
else if (celsius > 30) {
cout << "Hot!" << endl;
}
return 0;
}
