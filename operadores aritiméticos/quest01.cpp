#include <iostream>
#include <cstdlib>

using namespace std;

//Crie um programa que leia um número inteiro e mostre seu sucessor (DICA: n + 1).

int main (){
	int n, r;
	cout << "Digite um numero inteiro:";
	cin >> n;
	r = n + 1;
	system("cls");
	cout << "O sucessor:" <<r<<endl;
	system("pause");
	return 0;
}
