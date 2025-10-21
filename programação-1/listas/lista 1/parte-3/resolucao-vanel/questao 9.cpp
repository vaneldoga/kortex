// A moeda corrente de "Tão Tão Distante" possui notas de 100, 50, 20, 10, 5, 2 e 1 unidade monetária.
// Faça um programa que recebe um valor inteiro positivo nesta moeda, e retorna quantas notas de cada valor devem ser utilizadas para obter tal valor, utilizando o menor número de notas possível.
// ** ESSE PROGRAMA USA QUOCIENTE E RESTO **
// --------
// Entrada:
//                36                                           267
// Saída:
//      0 número de notas de 100.                    2 número de notas de 100.
//      0 Número de notas de 50.                     1 número de notas de 50.
//      1 Número de notas de 20.                     0 número de notas de 20.
//      1 Número de notas de 10.                     1 número de notas de 10.
//      1 Número de notas de 5.                      1 número de notas de 5.
//      0 Número de notas de 2.                      1 número de notas de 2.
//      1 Número de notas de 1.                      0 número de notas de 1.

#include <iostream>
using namespace std;

int main() {
    int valor;

    cout << "Insira o valor: ";
    cin >> valor;
   
    cout << valor / 100 << " Nota(s) de 100." << endl;
    valor = valor % 100;

    cout << valor / 50 << " Nota(s) de 50." << endl;
    valor = valor % 50; 

    cout << valor / 20 << " Nota(s) de 20." << endl;
    valor = valor % 20; 

    cout << valor / 10 << " Nota(s) de 10." << endl;
    valor = valor % 10; 
    
    cout << valor / 5 << " Nota(s) de 5." << endl;
    valor = valor % 5; 

    cout << valor / 2 << " Nota(s) de 2." << endl;
    valor = valor % 2; 

    cout << valor / 1 << " Nota(s) de 1." << endl;
    valor = valor % 1; 

    cout << "-- End of line --" << endl;

    return 0;
}
