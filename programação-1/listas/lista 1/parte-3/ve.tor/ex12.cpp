#include <iostream>
using namespace std;

int main(){
    // Dada uma temperatura em ºF, informe o correspondente em ºC. C = (F-32)*(5/9)
    float farenheit, celsius;

    cout << "farenheit: ";
    
    cin >> farenheit;

    celsius = (farenheit - 32) * (5.0/9.0);

    cout << celsius << endl;
}