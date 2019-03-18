#include <iostream>
#include <cstdlib>

using namespace std;

/*
	Implementar um programa que leia dois valores reais via teclado, em seguida, verifique qual é o
	menor, e como saída, exiba na tela o menor valor.	
*/
int main (){
	
	float n1, n2, menor; 

	cout << "Digite um numero:" <<endl; 
	cin >> n1;
	
	cout << "Digite um numero:" <<endl; 
	cin >> n2;
	system("cls");
	if (n1 < n2){
		menor = n1;
	}else{
		menor = n2;
	}
	
	cout << "O Menor valor eh "<< menor <<endl;
	system("pause");
	return 0;
}
