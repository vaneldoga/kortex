// Uma grande construtora que opera em diferentes países está com sérios problemas em relação ao fato de que seus funcionários utilizam diferentes medidas de distância dependendo do país onde operam.
// Para resolver esse problema, a diretoria da construtora solicitou que um programa conversor de distâncias fosse desenvolvido. O programa deve receber uma medida em pés e fazer conversões para as seguintes outras medidas:
// polegadas, jardas e milhas. Sabe-se que:
//      1 pé = 12 polegadas
//      1 jarda = 3 pés
//      1 milha = 1760 jardas
// Entrada:
//      número real indicando uma distância em pés
// Saídas:
//      número real indicando a conversão para polegadas
//      número real indicando a conversão para jardas
//      número real indicando a conversão para milhas

#include <iostream>
using namespace std;

int main() {
    float pe, polegadas, jardas, milhas;

    cout << "Insira a distância em pés: ";
    cin >> pe;
    
    polegadas = pe * 12;
    cout << pe << " Em polegadas: " << polegadas << endl;

    jardas = pe / 3;
    cout << pe << " Em jardas: " << jardas << endl;

    milhas = jardas / 1760;
    cout << pe << " Em milhas: " << milhas << endl;
}
