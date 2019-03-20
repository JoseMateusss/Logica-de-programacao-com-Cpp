#include <iostream>
#include <cstdlib>

using namespace std;

/*
	Implementar um programa que leia três valores diferentes reais via teclado, em seguida, faça uma
	comparação entre eles, e como saída, exiba na tela o maior valor.	
*/
int main (){
	
	int n1, n2, n3, maior; 

	cout << "Digite um numero:" <<endl; 
	cin >> n1;
	
	cout << "Digite um numero:" <<endl; 
	cin >> n2;
	
	cout << "Digite um numero:" <<endl; 
	cin >> n3;
	
	
	
	system("cls");
	
	if (n1 > n2){
		maior = n1;
	}else{
		maior = n2;
	}
	if (maior < n3){
		maior = n3;
	}
	cout << n1 <<endl;
	cout << n2 <<endl;
	cout << n3 <<endl;
	cout << "O MAIOR valor eh "<< maior <<endl;
	system("pause");
	return 0;
}
