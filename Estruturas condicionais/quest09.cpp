#include <iostream>
#include <cstdlib>

using namespace std;

/*
	Implementar um programa que leia um valor inteiro via teclado, em seguida verifique se o n�mero
	� par ou �mpar (um n�mero � par quando o resto da divis�o por dois � igual a zero), e como
	sa�da, exiba na tela a mensagem �O n�mero � par� ou �O n�mero � �mpar�.				
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
