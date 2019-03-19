#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

/*
	Implementar um programa que leia um valor literal via teclado, em seguida, verifique se é uma
	vogal ou consoante, e como saída, exiba na tela a mensagem “A letra é uma vogal” ou “A letra é
	uma consoante”.
*/
int main (){
	
	
	char letra; 


	cout << "Digite uma letra:" <<endl; 
	cin >> letra;
	
	system("cls");

	if (letra == 'a' or letra == 'A' ){
		cout << "A letra eh uma vogal "<<endl;
	}else if (letra == 'e'or letra == 'E' ){
		cout << "A letra eh uma vogal "<<endl;
	}else if (letra == 'i' or letra == 'I' ){
		cout << "A letra eh uma vogal "<<endl;
	}else if (letra == 'o' or letra == 'O' ){
		cout << "A letra eh uma vogal "<<endl;
	}else if (letra == 'u' or letra == 'U' ){
		cout << "A letra eh uma vogal "<<endl;
	}else{
		cout << "A letra eh uma consoante"<<endl;
	}
	
	
	system("pause");
	return 0;
}
