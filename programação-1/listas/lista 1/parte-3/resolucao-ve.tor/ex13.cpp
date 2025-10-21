#include <iostream>

using namespace std;

int main (){
    int QtdCanhoes, QtdPolvoras, QtdEspadas;
    float dinheiro, resto;

    cout << "Dinheiro: ";
    cin >> dinheiro;

    QtdCanhoes = dinheiro / 10000;
    resto = int(dinheiro) % 10000;

    QtdPolvoras = resto / 2000;
    resto = int(resto) % 2000;

    QtdEspadas = resto / 1500;
    resto = int(resto) % 1500;

    cout<< QtdCanhoes << endl << QtdPolvoras << endl << QtdEspadas << endl;

    return 0;
}