// Faça um programa que possa entrar com o valor de um produto e imprima o novo valor após ter recebido um desconto de 12%

#include <iostream>
using namespace std;

int main() {
    float preco, novo_preco;
    
    cout << "Digite o preço do produto: ";
    cin >> preco;

    novo_preco = preco - (preco * 0.12);
    cout << "Seu novo preco: " << novo_preco;

    return 0;
}
