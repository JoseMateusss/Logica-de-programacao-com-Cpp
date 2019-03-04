#include <iostream>
#include <cstdlib>

using namespace std;

//Crie um programa que leia o preço de um produto e uma porcentagem de desconto a ser aplicado ao valor do produto. Em seguida, calcule o desconto em cima do preço e exiba o valor a ser pago.

int main (){
	
	double precoAtual, precoDesconto, desconto;

	cout << "Preco do produto:";
	cin >> precoAtual;
	
	cout << "Porcentagem de desconto:";
	cin >> desconto;
	
	precoDesconto = precoAtual - (precoAtual * (desconto/100));
	system("cls");
	cout << "Valor do produto com desconto: " <<precoDesconto<<endl;
	system("pause");
	return 0;
}
