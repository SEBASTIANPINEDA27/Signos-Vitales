#include <iostream>
#include <string>

double fahrenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

std::string fiebreono(double celsius){
    if (celsius >=37.6){
        return "Tiene fiebre";
    } else {
        return "No tiene fiebre";
    }
}

int main() {
    double fahrenheit;

    std::cout << "Ingrese la temperatura en grados Fahrenheit: ";
    std::cin >> fahrenheit;

    double celsius = fahrenheitACelsius(fahrenheit);

    std::cout << fahrenheit << " F equivalen a " << celsius << " °C" << std::endl;

    std::cout << fiebreono(celsius) << std::endl;

    return 0;
}