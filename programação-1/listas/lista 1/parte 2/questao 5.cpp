// Pedro comprou um saco de ração com peso em quilos. 
// Ele possui dois gatos, para os quais fornece a quantidade de ração em gramas. 
// A quantidade diária de ração fornecida para cada gato é sempre a mesma. 
// Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para cada gato, calcule e mostre quanto restará de ração no saco após cinco dias.

#include <iostream>
using namespace std;

 int main() {
     float pesoSacoKg, racaoPorGatoGramas, pesoSacoGramas, racaoTotalConsumida, racaoRestante;
 
     // Entrada de dados
     cout << "Digite o peso do saco de ração (em Kg) ";
     cin >> pesoSacoKg;
 
     cout << "Digite a quantia de ração dada para cada gato em gramas: ";
     cin >> racaoPorGatoGramas;
 
     // conversão de quilos para gramas
     pesoSacoGramas = pesoSacoKg * 1000;
 
     // cálculo da ração consumidaa em 5 dias por dois gatos
     racaoTotalConsumida = racaoPorGatoGramas * 2 * 5;
 
     // cálculo da ração restante
     racaoRestante = pesoSacoGramas - racaoTotalConsumida;
 
     //saída
     cout << "Após 5 dias, restará " << racaoRestante << " g de ração." << endl;
 
     return 0;
 }
