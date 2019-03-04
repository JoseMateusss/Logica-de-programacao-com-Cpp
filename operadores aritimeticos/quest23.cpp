#include <iostream>
#include <cstdlib>

using namespace std;

//Crie um programa que leia dois valores reais via teclado, correspondentes a base b e altura h de um retângulo, em seguida calcule a área a (de acordo com a fórmula: a = b * h), e como saída, exiba na tela o resultado.
int main (){
	
	double area, base, altura;

	cout << "Valor da base:";
	cin >> base;
	
	cout << "Valor da altura:";
	cin >> altura;
	
	area = base * altura;
	system("cls");
	cout << "Area do retangulo: " <<area<<endl;
	system("pause");
	return 0;
}
