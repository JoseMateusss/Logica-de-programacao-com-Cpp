#include <iostream>
#include <cstdlib>

using namespace std;

//Crie um programa que lê o salário de um funcionário, aumenta o salário em 7% e mostra o resultado. (DICA: salario*1.07).

int main (){
	
	double salario, salarioComAumento;

	cout << "Digite o valor do seu salario: ";
	cin >> salario;
	
	salarioComAumento = salario * 1.07 ;
	system("cls");
	cout << "Salario final (com aumento): " <<salarioComAumento<<endl;
	system("pause");
	return 0;
}
