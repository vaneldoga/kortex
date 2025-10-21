// Faça um programa que leia dois pontos e calcule a distância entre eles no plano cartesiano.
// A distância deverá ser exibida na saída padrão.
// Sabe-se que dados dois pontos A = (x1, y1) e B = (x2, y2), a distância entre eles é a raiz quadrada da soma das diferenças das coordenadas ao quadrado, representada na fórmula a seguir:
//      $D = \sqrt{(x2-x1)^2 + (y2-y1)^2}$
// Cada ponto será representado por dois valores numéricos, representando as coordenadas, representando as coordenadas x e y do ponto, respectivamente.
// O exemplo a seguir leva ao cálculo da distância entre (-2.1, 4.6) e (3.3, -1.6).
// Entrada:
//      - Número real da coordenada x do primeiro ponto (-2.1)
//      - Número real da coordenada y do primeiro ponto (4.6)
//      - Número real da coordenada x do segundo ponto (3.3)
//      - Número real da coordenada y do segundo ponto (-1.6)
// Saída:
//      - Número real representando a distância entre os dois pontos (8.22192)

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x2, y2, distancia;

    cout << "Informe as coordenadas (x, y) do primeiro ponto: ";
    cin >> x1 >> y1;

    cout << "Informe as coordenadas (x, y) do segundo ponto: ";
    cin >> x2 >> y2;

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "A distância entre os dois pontos é: " << distancia << endl;
}
