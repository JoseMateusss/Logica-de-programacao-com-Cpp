#include <iostream>
#include <cstdlib>

using namespace std;

//Implementar um programa que leia um valor inteiro via teclado, em seguida verifique se o n�mero � positivo ou negativo.

int main (){
	
	int n1; //Definir vari�vel para guardar o valor que o usu�rio digitar.

	cout << "Digite um numero:"; //Pedir para o usu�rio digitar.
	cin >> n1;	//guardar o valor digitado na vari�vel.
	
	if (n1 > 0){ //Estabelecer a condi��o para que o fluxo do programa continue (Nesse caso temos: "Se o n1 (n�mero que o user digitou) � maior que zero, pois os n�meros positivos s�o maiores que zero.")
		cout << n1 << " eh um numero POSITIVO" <<endl; // Nesse bloco definimos o que ser� feito caso a estrutura condicional seja satisfeita, ou seja, o user digitar um n�mero maior que zero.
	}else{ // o 'else' (SE N�O) defini o que o programar tem que fazer caso a estrutura condicional n�o seja satisfeita (O user digitar um n�mero menor que zero).
		cout << n1 << " eh um numero NEGATIVO" <<endl; 
	}
	system("pause");
	return 0;
}
