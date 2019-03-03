#include <iostream>
#include <cstdlib>

using namespace std;

//Crie um programa que lê um valor em dólar, e converte o valor para reais. Considere que 1 dólar equivale a 3.50 reais (DICA: um_dolar * valor_em_reais).

int main (){
	
	double dolar, reais;

	cout << "Quantidade de dolares: ";
	cin >> dolar;
	
	reais = dolar * 3.50 ;
	system("cls");
	cout << "Valor em rais: " <<reais<<endl;
	system("pause");
	return 0;
}
