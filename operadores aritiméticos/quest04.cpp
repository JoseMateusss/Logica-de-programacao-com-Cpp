#include <iostream>
#include <cstdlib>

using namespace std;

//Crie um programa que leia um n�mero inteiro e mostre a metade desse n�mero.

int main (){
	
	double n, r;

	cout << "Digite um numero inteiro:";
	cin >> n;
	r = n / 2;
	system("cls");
	cout << "A metade:" <<r<<endl;
	system("pause");
	return 0;
}
