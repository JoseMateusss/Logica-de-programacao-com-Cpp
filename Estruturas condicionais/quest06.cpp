#include <iostream>
#include <cstdlib>

using namespace std;

/*
	Implementar um programa que leia dois valores inteiros via teclado, em seguida, verifique se os
	valores s�o iguais, e como sa�da, exiba na tela a mensagem �Os valores s�o iguais� ou �Os valores
	s�o diferentes�.
*/
int main (){
	
	float n1, n2; 

	cout << "Digite um numero:" <<endl; 
	cin >> n1;
	
	cout << "Digite um numero:" <<endl; 
	cin >> n2;
	system("cls");
	if (n1 == n2){
		cout << "Os valores sao iguais"<<endl;
	}else{
		cout << "Os valores sao diferentes"<<endl;
	}
	
	
	system("pause");
	return 0;
}
