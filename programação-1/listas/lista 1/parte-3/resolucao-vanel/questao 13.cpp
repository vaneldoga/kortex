// A expedição que saiu de Lisboa em 09 de março de 1500 precisava levar canhões, pólvora e espadas afiadas.
// O canhão custava 10.000,00 réis, o quilo da pólvora custava 2.000,00 réis e cada espada custava 1.500,00 réis.
// Faça um programa que calcule quantos canhões, quilos de pólvora e espadas podem ser comprados, de acordo com a quantidade de dinheiro disponível.
// Considere que era mais importante ter canhão e pólvora, nesta ordem.
// As saídas devem ser inteíras.
// Entradas:
//      - Quantidade de dinheiro disponível (123500)
// Saídas:
//      - Quantidade de canhões (12)
//      - Quantidade de quilos de pólvora (1)
//      - Quantidade de espadas (1)

#include <iostream>
using namespace std;

int main() {
    
    float valor;

    cout << "Insira a quantidade de dinheiro disponível: ";
    cin >> valor;

    cout << int(valor) / 10000 << endl;
    valor = int(valor) % 10000;

    cout << int(valor) / 2000 << endl;
    valor = int(valor) % 2000; 

    cout << int(valor) / 1500 << endl;
    valor = int(valor) % 1500; 

    return 0;
}
