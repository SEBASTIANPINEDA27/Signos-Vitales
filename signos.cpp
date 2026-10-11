
#include <iostream>
#include <string>

std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "Bradicardia";
    } else if (lpm <= 100) {
        return "Normal";
    } else {
        return "Taquicardia";
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
    int frecuencia;

    std::cout << "Ingrese la frecuencia cardiaca (lpm): ";
    std::cin >> frecuencia;

    std::cout << clasificarFrecuencia(frecuencia) << std::endl;

    return 0;

    double fahrenheit;

    std::cout << "Ingrese la temperatura en grados Fahrenheit: ";
    std::cin >> fahrenheit;

    double celsius = fahrenheitACelsius(fahrenheit);

    std::cout << fahrenheit << " F equivalen a " << celsius << " °C" << std::endl;

    std::cout << fiebreono(celsius) << std::endl;

    return 0;
}