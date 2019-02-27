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
	int n1, n2, n3;
	cout << "Digite seu nome: "; 
	cin >> nome;
	system("cls");
	cout << "Digite o dia que voce nasceu:"; 
	cin >> n1;
	system("cls");
	cout << "Digite o mês que voce nasceu:"; 
	cin >> n2;
	system("cls");
	cout << "Digite o ano que voce nasceu:"; 
	cin >> n3;
	system("cls");
	cout << "--------------------------------------------------------"<<endl;
	cout <<  "Nome:"<<nome        <<endl;
	cout <<  "Data de nascimento:"<<n1<<"/"<<n2<<"/"<<n3        <<endl;
	cout << "--------------------------------------------------------"<<endl;
	
	system("pause");
	return 0;
	
	
	
}

