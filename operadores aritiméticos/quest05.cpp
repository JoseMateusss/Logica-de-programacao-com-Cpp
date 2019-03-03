#include <iostream>
#include <cstdlib>

using namespace std;

//Crie um programa que leia dois números inteiros e mostre o valor da soma entre esses dois números.

int main (){
	
	int n1, n2, r;

	cout << "Digite um numero:";
	cin >> n1;
	cout << "Digite um numero:";
	cin >> n2;
	r = n1 + n2;
	system("cls");
	cout << "A soma e: " <<r<<endl;
	system("pause");
	return 0;
}
