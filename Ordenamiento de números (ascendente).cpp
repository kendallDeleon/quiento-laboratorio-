#include <iostream>

void ordenarNumeros(int &a, int &b, int &c) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
}

int main() {
    int num1, num2, num3;
    std::cout << "Ingrese tres numeros enteros: ";
    std::cin >> num1 >> num2 >> num3;

    ordenarNumeros(num1, num2, num3);

    std::cout << "Numeros ordenados de menor a mayor: " << num1 << ", " << num2 << ", " << num3 << std::endl;

    return 0;
}
