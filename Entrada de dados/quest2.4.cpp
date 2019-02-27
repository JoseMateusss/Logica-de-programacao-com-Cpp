//primeiro passo é fazer as importaões das bibliotecas do C++, que serão utilizadas. Algumas são obrigatórias, como as duas primeiras.
#include <iostream>
#include <stdlib.h>
#include <string>
#include<stdlib.h> //biblioteca para limpar tela
using namespace std;

int	main ()
{
	//Faça um progrma que leia as 5 vogais e imprima, separadas por vírgula
	//obj. cout 
	// << inserção
	//obj. cin
	// >> extração
	
	char l1[100],l2[100], l3[100], l4[100], l5[100]; //declarações das variáveis
	cout << "Digite a 1º vogal:"; 
	cin >> l1;
	system("cls");
	
	cout << "Digite a 2º vogal:"; 
	cin >> l2;
	system("cls");
	
	cout << "Digite a 3º vogal"; 
	cin >> l3;
	system("cls");
	
	cout << "Digite a 4º vogal"; 
	cin >> l4;
	system("cls");
	
	
	cout << "Digite a 5º vogal"; 
	cin >> l5;
	system("cls");
	cout << "As letras digitadas foram:"<<endl;
	cout << l1<<", ";
	cout << l2<<", ";
	cout << l3<<", ";
	cout << l4<<", ";
	cout << l5<<"."<<endl;
	
	system("pause");
	return 0;
	
	
	
}

