#include <iostream>
#include <cstdlib>

using namespace std;

/*
	Implementar um programa que leia três valores diferentes reais via teclado, em seguida, faça uma
	comparação entre eles, e como saída, exiba na tela o menor valor.	
*/
int main (){
	
	int n1, n2, n3, menor; 

	cout << "Digite um numero:" <<endl; 
	cin >> n1;
	
	cout << "Digite um numero:" <<endl; 
	cin >> n2;
	
	cout << "Digite um numero:" <<endl; 
	cin >> n3;
	
	
	
	system("cls");
	
	if (n1 > n2){
		menor = n2;
	}else{
		menor = n1;
	}
	if (menor > n3){
		menor = n3;
	}
	cout << n1 <<endl;
	cout << n2 <<endl;
	cout << n3 <<endl;
	cout << "O Menor valor eh "<< menor <<endl;
	system("pause");
	return 0;
}
