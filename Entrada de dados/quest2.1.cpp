//primeiro passo � fazer as importa�es das bibliotecas do C++, que ser�o utilizadas. Algumas s�o obrigat�rias, como as duas primeiras.
#include <iostream>
#include <stdlib.h>
#include <string>
#include<stdlib.h> //biblioteca para limpar tela
using namespace std;

int	main ()
{
	//Fa�a um progrma que receba um nome e imprima a mensagem "Oi, seu nome"
	//obj. cout 
	// << inser��o
	//obj. cin
	// >> extra��o
	
	char nome[100]; //declara��es das vari�veis
	cout << "Digite seu nome: "; 
	cin >> nome;
	system("cls");
	cout << "Oi, " << nome << "." <<endl;
	
	system("pause");
	return 0;
	
	
	
}

