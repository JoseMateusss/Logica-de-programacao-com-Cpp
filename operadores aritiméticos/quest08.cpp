#include <iostream>
#include <cstdlib>

using namespace std;

//Crie um programa que leia dois números inteiros e mostre o valor da divisão entre esses dois números.

int main (){
	
	double n1, n2, r;

	cout << "Digite um numero:";
	cin >> n1;
	cout << "Digite um numero:";
	cin >> n2;
	r = n1 / n2;
	system("cls");
	cout << "A divisao e: " <<r<<endl;
	system("pause");
	return 0;
}
