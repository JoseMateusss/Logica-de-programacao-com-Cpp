#include <iostream>
#include <cstdlib>

using namespace std;

//Crie um programa que lê cinco valores reais do teclado, correspondentes a nota de um aluno, em seguida, calcule e mostre a média aritmética entre eles.
int main (){
	
	double n1, n2, n3, n4, n5, media;

	cout << "Digite a nota 01: ";
	cin >> n1;
	cout << "Digite a nota 02: ";	
	cin >> n2;
	cout << "Digite a nota 03: ";	
	cin >> n3;
	cout << "Digite a nota 04: ";
	cin >> n4;
	cout << "Digite a nota 05: ";
	cin >> n5;
	media = (n1 + n2 + n3 + n4 + n5)/5;
	
	system("cls");
	cout << "A media e: " <<media<<endl;
	
	system("pause");
	return 0;
}
