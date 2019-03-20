#include <iostream>
#include <cstdlib>

using namespace std;

//Crie um programa que leia um valor real via teclado, correspondente a altura a de um homem, em seguida, calcule o peso ideal p (de acordo com a fórmula: p = (72.7 * a) - 58), e como saída, exiba na tela o resultado.

int main (){
	
	double altura, peso;

	cout << "Digite sua altura:";
	cin >> altura;
	
	peso = ((62.1 *altura) - 44.7);
	system("cls");
	cout << "Seu peso ideal e: " <<peso<<endl;
	system("pause");
	return 0;
}
