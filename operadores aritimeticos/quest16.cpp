#include <iostream>
#include <cstdlib>

using namespace std;

//Calcular o saldo atual da conta de um cliente de um banco após a realização de um saque. Como entrada, deve ser informado o saldo anterior e o valor do saque realizado.

int main (){
	
	double saldoAnterior, saque, saldoAtual;

	cout << "Digite seu saldo:";
	cin >> saldoAnterior;
	cout << "Valor do saque:";
	cin >> saque;
	saldoAtual = saldoAnterior - saque;
	system("cls");
	cout << "Seu saldo atual e: " <<saldoAtual<<endl;
	system("pause");
	return 0;
}
