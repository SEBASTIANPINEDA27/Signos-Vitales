#include <iostream>

double fahrenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main() {
    double fahrenheit;

    std::cout << "Ingrese la temperatura en grados Fahrenheit: ";
    std::cin >> fahrenheit;

    double celsius = fahrenheitACelsius(fahrenheit);

    std::cout << fahrenheit << " F equivalen a " << celsius << " °C" << std::endl;

    return 0;
}