#include <iostream>
#include <cstdlib>

using namespace std;

//Uma loja est� fazendo liquida��o, vendendo tudo por 40% do pre�o original. Fa�a um programa que calcule o novo valor do produto, recebendo como entrada o pre�o original do produto.

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
