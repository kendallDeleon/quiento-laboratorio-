#include <iostream>

int sumaParesImpares(int numero, bool sumarPares) {
    int suma = 0;
    for (int i = 1; i <= numero; i++) {
        if (sumarPares && i % 2 == 0) {
            suma += i;
        } else if (!sumarPares && i % 2 != 0) {
            suma += i;
        }
    }
    return suma;
}

int main() {
    int numero;
    bool sumarPares;
    
    std::cout << "Introduce un número: ";
    std::cin >> numero;
    
    std::cout << "¿Quieres sumar pares (1) o impares (0)? ";
    std::cin >> sumarPares;
    
    int resultado = sumaParesImpares(numero, sumarPares);
    std::cout << "La suma es: " << resultado << std::endl;
    
    return 0;
}
