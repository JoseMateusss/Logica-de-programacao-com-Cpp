#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

/*
	Implementar um programa que leita um valor inteiro via teclado, que corresponde a um ano do
	calendário gregoriano, em seguida, verificar se o ano é bissexto ou não (o ano é bissexto quando
	é múltiplo de 400, ou quando é múltiplo de 4 e não é múltiplo de 100), e como saída, exiba na
	tela a mensagem “O ano é bissexto” ou “O ano não é bissexto”.			
*/
int main (){
	
	
	int ano; 


	cout << "Digite o ano:" <<endl; 
	cin >> ano;
	
	system("cls");

	if ((ano % 4) == 0 and (ano % 100) != 0){
		cout << "O ano eh bissexto" <<endl;
	}else{
		cout<< "O ano nao eh bissexto" <<endl;
	}
	
	
	system("pause");
	return 0;
}
