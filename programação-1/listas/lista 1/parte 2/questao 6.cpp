// Faça um programa que leia 2 valores inteiros para duas variáveis a e b, escreva os conteúdos das variáveis na tela, e em seguida troque os conteúdos das duas variáveis, exibindo novamente os seus conteúdos na tela.

#include <iostream>
using namespace std;

int main() {
    int a = 20, b = 88, temp_a = 0;

    temp_a = a;
    a = b;
    b = temp_a;

    cout << "Valor de a: " << a << endl;
    cout << "Valor de b: " << b << endl;

    return 0;
}
