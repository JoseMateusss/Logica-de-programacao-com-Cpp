#include <iostream>
#include <cstdlib>

using namespace std;

//Implementar um programa que leia um valor inteiro via teclado, em seguida verifique se o número é positivo ou negativo.

int main (){
	
	int n1; //Definir variável para guardar o valor que o usuário digitar.

	cout << "Digite um numero:"; //Pedir para o usuário digitar.
	cin >> n1;	//guardar o valor digitado na variável.
	
	if (n1 > 0){ //Estabelecer a condição para que o fluxo do programa continue (Nesse caso temos: "Se o n1 (número que o user digitou) é maior que zero, pois os números positivos são maiores que zero.")
		cout << n1 << " eh um numero POSITIVO" <<endl; // Nesse bloco definimos o que será feito caso a estrutura condicional seja satisfeita, ou seja, o user digitar um número maior que zero.
	}else{ // o 'else' (SE NÃO) defini o que o programar tem que fazer caso a estrutura condicional não seja satisfeita (O user digitar um número menor que zero).
		cout << n1 << " eh um numero NEGATIVO" <<endl; 
	}
	system("pause");
	return 0;
}
