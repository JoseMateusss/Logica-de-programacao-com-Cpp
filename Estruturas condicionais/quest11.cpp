#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

/*
	Implementar um programa que leia um valor literal via teclado, em seguida, verifique se � uma
	vogal ou consoante, e como sa�da, exiba na tela a mensagem �A letra � uma vogal� ou �A letra �
	uma consoante�.
*/
int main (){
	
	
	char letra[100],A[100],B[1],C[1]; 
	A = " a ";

	cout << "Digite uma letra:" <<endl; 
	cin >> letra;
	
	system("cls");
	
	if (letra == A){
		cout << "A letra eh uma vogal "<<endl;
	}else if (letra == "e"){
		cout << "A letra eh uma vogal "<<endl;
	}else if (letra == "i"){
		cout << "A letra eh uma vogal "<<endl;
	}else if (letra == "o"){
		cout << "A letra eh uma vogal "<<endl;
	}else if (letra == "u"){
		cout << "A letra eh uma vogal "<<endl;
	}else{
		cout << "A letra eh uma consoante"<<endl;
	}
	
	
	system("pause");
	return 0;
}
