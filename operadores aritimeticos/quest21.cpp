#include <iostream>
#include <cstdlib>

using namespace std;

//Uma loja está fazendo liquidação, vendendo tudo por 40% do preço original. Faça um programa que calcule o novo valor do produto, recebendo como entrada o preço original do produto.

int main (){
	
	double precoAtual, precoDesconto;

	cout << "Preco do produto:";
	cin >> precoAtual;
	
	precoDesconto = precoAtual - (precoAtual * 0.40) ;
	system("cls");
	cout << "Valor do produto com desconto: " <<precoDesconto<<endl;
	system("pause");
	return 0;
}
