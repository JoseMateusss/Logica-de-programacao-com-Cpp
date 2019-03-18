#include <iostream>
#include <cstdlib>

using namespace std;

/*
	Implementar um programa que leia um valor inteiro via teclado, em seguida verifique se o número
	é par ou ímpar (um número é par quando o resto da divisão por dois é igual a zero), e como
	saída, exiba na tela a mensagem “O número é par” ou “O número é ímpar”.				
*/
int main (){
	
	int n1; 

	cout << "Digite um numero:" <<endl; 
	cin >> n1;
	
	system("cls");
	
	if ((n1 % 2) == 0 ){
		cout << n1 <<" eh par"<<endl;
	}else{
		cout << n1 <<" eh impar"<<endl;
	}
	
	
	system("pause");
	return 0;
}
