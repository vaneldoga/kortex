// Faça um programa que leia um número inteiro e imprima o quadrado desse número e o correspondente a sua quinta parte.

#include <iostream>
using namespace std;

int main() {
    int numero, quadrado;
    float quinto;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    quadrado = numero * numero;
    quinto = numero / 5.0;
    cout << "O quadrado de " << numero << " é " << quadrado << endl;
    cout << "A quinta parte de " << numero << " é " << quinto << endl;
    
    return 0;
}
