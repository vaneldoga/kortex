#include <iostream>
using namespace std;
int main () {
	float preco, novo_preco;
	cout<<"Digite o preço do produto ";
	cin>>preco;
	novo_preco = preco - (preco * 0.12);
	cout<<"Seu novo preco: "<<novo_preco;
	return 0;
}
