//primeiro passo � fazer as importa�es das bibliotecas do C++, que ser�o utilizadas. Algumas s�o obrigat�rias, como as duas primeiras.
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

