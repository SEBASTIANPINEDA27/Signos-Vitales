
#include <iostream>
#include <string>

std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "Bradicardia";
    } else if (lpm <= 100) {
        return "Normal";
    } else {
        return "Taquicardia";
    }
}

int main() {
    int frecuencia;

    std::cout << "Ingrese la frecuencia cardiaca (lpm): ";
    std::cin >> frecuencia;

    std::cout << clasificarFrecuencia(frecuencia) << std::endl;

    return 0;
}