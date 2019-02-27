//primeiro passo é fazer as importaões das bibliotecas do C++, que serão utilizadas. Algumas são obrigatórias, como as duas primeiras.
#include <iostream>
#include <stdlib.h>
#include <string>
#include<stdlib.h> //biblioteca para limpar tela
using namespace std;

int	main ()
{
	//Faça um progrma que receba um nome e imprima a mensagem "Oi, seu nome"
	//obj. cout 
	// << inserção
	//obj. cin
	// >> extração
	
	char nome[100]; //declarações das variáveis
	cout << "Digite seu nome: "; 
	cin >> nome;
	system("cls");
	cout << "Oi, " << nome << "." <<endl;
	
	system("pause");
	return 0;
	
	
	
}

