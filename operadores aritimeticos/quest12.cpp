#include <iostream>
#include <cstdlib>

using namespace std;

//Crie um programa que lê três valores reais do teclado, correspondentes a nota de um aluno, em seguida, calcule e mostre a média aritmética entre eles. DICA: observar a precedência dos operadores. Para dois números, seria: (x + y)/2
int main (){
	
	double n1, n2, n3, media;

	cout << "Digite um numero: ";
	cin >> n1;
	cout << "Digite um numero: ";	
	cin >> n2;
	cout << "Digite um numero: ";	
	cin >> n3;
	media = (n1 + n2 + n3)/3;
	
	system("cls");
	cout << "A media e: " <<media<<endl;
	
	system("pause");
	return 0;
}
