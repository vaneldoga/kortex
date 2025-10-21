#include <iostream>

using namespace std;

int main(){
    int Qtd100, Qtd50, Qtd20, Qtd10, Qtd5, Qtd2, Qtd1;
    
    int n;
    int res;

    cout << "Digite a quantidade de unidade monetaria: " << endl;
    cin >> n;

    Qtd100 = n/100;
    res = n % 100;

    Qtd50 = res /50;
    res = res % 50;

    Qtd20 = res / 20;
    res = res % 20;

    Qtd10 = res / 10;
    res = res % 10;

    Qtd5 = res / 5;
    res = res % 5;

    Qtd2 = res / 2;
    res = res % 2;

    Qtd1 = res / 1;
    res = res % 1;

    cout << "Qtd de 100: " << Qtd100  << endl;
    cout << "Qtd de 50: "<< Qtd50 << endl; 
    cout <<"Qtd de 20: "<< Qtd20 << endl;
    cout << "Qtd de 10: "<< Qtd10 << endl;
    cout <<"Qtd de 5: "<< Qtd5<< endl;
    cout <<"Qtd de 2: " << Qtd2<< endl;
    cout <<"Qtd de 1: " << Qtd1 << endl;

    return 0;
}