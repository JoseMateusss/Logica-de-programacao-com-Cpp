#include <iostream>
#include <cstdlib>

using namespace std;

//Crie um programa que leia um n�mero inteiro e mostre seu antecessor (DICA: n - 1).

int main (){
	int n, r;
	cout << "Digite um numero inteiro:";
	cin >> n;
	r = n + 1;
	system("cls");
	cout << "O antecessor:" <<r<<endl;
	system("pause");
	return 0;
}
