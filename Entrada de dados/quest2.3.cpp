//primeiro passo � fazer as importa�es das bibliotecas do C++, que ser�o utilizadas. Algumas s�o obrigat�rias, como as duas primeiras.
#include <iostream>
#include <stdlib.h>
#include <string>
#include<stdlib.h> //biblioteca para limpar tela
using namespace std;

int	main ()
{
	//Fa�a um progrma que leia 5 valores literais e os imprima na tela
	// << inser��o
	//obj. cin
	// >> extra��o
	
	char l1[100],l2[100], l3[100], l4[100], l5[100]; //declara��es das vari�veis
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

