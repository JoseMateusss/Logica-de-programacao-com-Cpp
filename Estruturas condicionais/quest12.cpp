#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

/*
	Implementar um programa que leita um valor inteiro via teclado, que corresponde a um ano do
	calend�rio gregoriano, em seguida, verificar se o ano � bissexto ou n�o (o ano � bissexto quando
	� m�ltiplo de 400, ou quando � m�ltiplo de 4 e n�o � m�ltiplo de 100), e como sa�da, exiba na
	tela a mensagem �O ano � bissexto� ou �O ano n�o � bissexto�.			
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
