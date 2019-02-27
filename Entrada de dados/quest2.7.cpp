//primeiro passo é fazer as importaões das bibliotecas do C++, que serão utilizadas. Algumas são obrigatórias, como as duas primeiras.
#include <iostream>
#include <cstdlib>
#include <string>
#include<stdlib.h> //biblioteca para limpar tela
using namespace std;

int	main ()
{
	char fruta[100];
	cout << "Digite o nome da fruta:";
	cin >> fruta;
	system("cls");
	cout << "------------------------------"<<endl;
	cout <<  "          "<<fruta        <<endl;
	cout << "------------------------------"<<endl;
	system("pause");
	return 0;
	
	
	
}

