#include <iostream>
using namespace std;

int contarDigitos(int numero) {
    int cantidadDigitos = 0;
    do {
        numero /= 10;
        cantidadDigitos++;
    } while (numero != 0);
    return cantidadDigitos;
}

int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    cout << "El numero de digitos es: " << contarDigitos(numero) << endl;
    return 0;
}
