#include <iostream>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    while (n > 1) {
        result *= n;
        n--;
    }
    return result;
}

int main() {
    int n;
    std::cout << "Introduce un número entero positivo: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "El factorial de un número negativo no está definido.\n";
    } else {
        unsigned long long fact = factorial(n);
        std::cout << "El factorial de " << n << " es: " << fact << "\n";
    }

    return 0;
}
