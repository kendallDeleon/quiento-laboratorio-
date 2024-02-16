#include <stdio.h>

int sumarDigitos(int numero) {
    int suma = 0;
    while (numero != 0) {
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}

int main() {
    int numero;
    printf("Ingresa un número entero: ");
    scanf("%d", &numero);
    int resultado = sumarDigitos(numero);
    printf("La suma de los dígitos de %d es %d\n", numero, resultado);
    return 0;
}
