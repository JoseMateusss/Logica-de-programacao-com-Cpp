#include <iostream>
#include <cstdlib>

using namespace std;

//Crie um programa que leia um n�mero inteiro e mostre o dobro desse n�mero (DICA: n * 2).

int main (){
	int n, r;
	cout << "Digite um numero inteiro:";
	cin >> n;
	r = n * 2;
	system("cls");
	cout << "O dobro:" <<r<<endl;
	system("pause");
	return 0;
}
