#include <iostream>
using namespace std;
int main () {
	int a, b, aux;

    cin >> a;
    cin >> b;

    cout<<" Valor de a " <<a<<endl;
	cout<<" Valor de b " <<b<<endl;

    aux = a;
    a = b;
    b = aux;


	cout<<" Valor de a " <<a<<endl;
	cout<<" Valor de b " <<b<<endl;
	return 0;
}
