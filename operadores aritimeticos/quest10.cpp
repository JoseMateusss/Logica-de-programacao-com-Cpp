#include <iostream>
#include <iostream>
#include <cstdlib>>

using namespace std;

//Crie um programa que l� dois n�meros reais, calcula e mostra a soma, a subtra��o, multiplica��o e a divis�o entre eles.

int main (){
	
	double n1, n2, soma, subtracao, multiplicacao, divisao;

	cout << "Digite um numero: ";
	cin >> n1;
	cout << "Digite um numero: ";	
	cin >> n2;
	soma = n1 + n2;
	subtracao = n1 - n2;
	multiplicacao = n1 * n2;
	divisao = n1 / n2;
	system("cls");
	cout << "soma: " <<soma<<endl;
	cout << "subtracao: " <<subtracao<<endl;
	cout << "multiplicacao: " <<multiplicacao<<endl;
	cout << "divisao: " <<divisao<<endl;
	system("pause");
	return 0;
}
