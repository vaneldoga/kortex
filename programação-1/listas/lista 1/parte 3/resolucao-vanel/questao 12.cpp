// Dada uma temperatura em °F, informe o correspondente em °C.
//      C = ( F-32 ) * ( 5 / 9 )

#include <iostream>
using namespace std;

int main() {
    float f, c;

    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> f;

    c = (f - 32) * (5.0/9.0);

    cout << c << endl;
}
