#include <iostream>
#include <cstdlib>

using namespace std;

/*
	Implementar um programa que leia três valores diferentes reais via teclado, em seguida, faça uma
	comparação entre eles, e como saída, exiba na tela o valor intermediário.
*/
int main (){
	
	int n1, n2, n3, maior, menor, intermediario; 

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
	

	if (n1 > n2){
		menor = n2;
	}else{
		menor = n1;
	}
	if (menor > n3){
		menor = n3;
	}
	
	if (menor == n1 and maior == n2){
		intermediario = n3;
	}else if(menor == n2 and maior==n1){
		intermediario = n3;
		
	}else if (menor == n1 and maior==n3){
		intermediario = n2;
	}else if (menor == n3 and maior==n1){
		intermediario = n2;
	}else if (menor == n3 and maior==n2){
		intermediario = n1;
	}else if (menor == n2 and maior==n3){
		intermediario = n1;
	}
	
	
	cout << "O Menor valor eh "<< menor <<endl;
	cout << "O MAIOR valor eh "<< maior <<endl;
	cout << "O valor intermediario eh "<< intermediario <<endl;
	system("pause");
	return 0;
}
