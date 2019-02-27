//primeiro passo é fazer as importaões das bibliotecas do C++, que serão utilizadas. Algumas são obrigatórias, como as duas primeiras.
#include <iostream>
#include <stdlib.h>
#include <string>
#include<stdlib.h> //biblioteca para limpar tela
using namespace std;

int	main ()
{
	//Faça um progrma que o user digite o seu nome e sobrenome e depois imprima na tela na mesma linha
	//obj. cout 
	// << inserção
	//obj. cin
	// >> extração
	
	char nome[100], sobrenome[100];
	cout << "Digite seu nome: "; 
	cin >> nome;
	system("cls");
	cout << "Digite seu sobrenome: "; 
	cin >> sobrenome;
	system("cls");
	cout << nome << " " <<sobrenome <<endl;
	
	system("pause");
	return 0;
	
	
	
}

