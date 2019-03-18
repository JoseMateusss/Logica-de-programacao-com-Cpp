#include <iostream>
#include <cstdlib>

using namespace std;

/*
	Implementar um programa que leia dois valores reais via teclado, em seguida, verifique qual é o
	maior, e como saída, exiba na tela o maior valor.			
*/
int main (){
	
	float n1, n2, maior; 

	cout << "Digite um numero:" <<endl; 
	cin >> n1;
	
	cout << "Digite um numero:" <<endl; 
	cin >> n2;
	system("cls");
	if (n1 > n2){
		maior = n1;
	}else{
		maior = n2;
	}
	
	cout << "O maior valor eh "<< maior <<endl;
	system("pause");
	return 0;
}
