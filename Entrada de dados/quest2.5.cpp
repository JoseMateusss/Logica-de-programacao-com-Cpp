//primeiro passo � fazer as importa�es das bibliotecas do C++, que ser�o utilizadas. Algumas s�o obrigat�rias, como as duas primeiras.
#include <iostream>
#include <stdlib.h>
#include <string>
#include<stdlib.h> //biblioteca para limpar tela
using namespace std;

int	main ()
{
	//Fa�a um progrma que receba as 26 letras do alfabeto e imprima 
	//obj. cout 
	// << inser��o
	//obj. cin
	// >> extra��o
	
	char l1[100],l2[100], l3[100], l4[100], l5[100]; //declara��es das vari�veis
	cout << "Digite a 1� letra do alfabeto:"; 
	cin >> l1;
	system("cls");
	
	cout << "Digite a 2� letra do alfabeto:"; 
	cin >> l2;
	system("cls");
	
	cout << "Digite a 3� letra do alfabeto"; 
	cin >> l3;
	system("cls");
	
	cout << "Digite a 4� letra do alfabeto"; 
	cin >> l4;
	system("cls");
	
	
	cout << "Digite a 5� letra do alfabeto"; 
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

