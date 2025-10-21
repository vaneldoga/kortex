#include <iostream>

using namespace std;

int main (){
    float pes, polegadas, jardas, milhas;

    cout << "Qtd de pes: " << endl;
    cin >> pes;

    polegadas =  pes *12;
    jardas = pes / 3;
    milhas = jardas / 1760;

    cout <<"polegadas: "<< polegadas << endl;
    cout <<"jardas: "<< jardas << endl;
    cout <<"milhas: "<< milhas << endl;


    return 0;
}