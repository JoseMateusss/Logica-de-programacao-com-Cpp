#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;
/*
	Implementar um programa que leia dois valores reais e um valor literal (+, - , × e /) via teclado,
	em seguida, calcule a operação aritmética de acordo com a opção digitada, e como saída, exiba
	na tela o resultado.
	
*/

int main (){
	
	
	float n1, n2;
	char x;
	 


	cout << "Digite o primeiro valor:" <<endl; 
	cin >> n1;
	
	cout << "Digite o segundo valor:" <<endl; 
	cin >> n2;
	
	cout << "Digite a operacao (+, - , x , /):" <<endl; 
	cin >> x;
	
	system("cls");
	if (x == '+' or x == '-' or x == 'x' or x == '/'){
	
		if (x == '+'){
			cout << n1+n2 <<endl;
		}else if (x == '-'){
			cout << n1 - n2 <<endl ;
		}else if (x == 'x'){
			cout << n1 * n2 <<endl;
		}else{
			cout << n1/n2 <<endl; 
		}
	}else{
		cout << "Operacao invalida" <<endl;
	}	
		
	
	
	
	
	
	

	
	
	system("pause");
	return 0;
}
