//primeiro passo é fazer as importaões das bibliotecas do C++, que serão utilizadas. Algumas são obrigatórias, como as duas primeiras.
#include <iostream>
#include <stdlib.h>
#include <string>
#include<stdlib.h> //biblioteca para limpar tela
using namespace std;

int	main ()
{
	//Faça um progrma que leia 5 valores literais e os imprima na tela
	// << inserção
	//obj. cin
	// >> extração
	
	char l1[100],l2[100], l3[100], l4[100], l5[100]; //declarações das variáveis
	cout << "Digite uma letra:"; 
	cin >> l1;
	system("cls");
	
	cout << "Digite uma letra:"; 
	cin >> l2;
	system("cls");
	
	cout << "Digite uma letra:"; 
	cin >> l3;
	system("cls");
	
	cout << "Digite uma letra:"; 
	cin >> l4;
	system("cls");
	
	
	cout << "Digite uma letra:"; 
	cin >> l5;
	system("cls");
	cout << "As letras digitadas foram:"<<endl;
	cout << l1<<endl;
	cout << l2<<endl;
	cout << l3<<endl;
	cout << l4<<endl;
	cout << l5<<endl;
	
	system("pause");
	return 0;
	
	
	
}

