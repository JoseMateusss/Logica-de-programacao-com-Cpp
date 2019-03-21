#include <iostream>
#include <cstdlib>

using namespace std;

/*
	As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe
	contrataram para construir um programa que calculará os reajustes. Implemente um programa
	que leia um valor real via teclado, que corresponde ao salário de um colaborador, em seguida,
	calcule o reajuste segundo os critério baseado no salário atual (Salários até R$ 280,00 - aumento
	de 20%; salários entre R$ 280,00 e R$ 700,00 - aumento de 15%; salários entre R$ 700,00 e R$
	1.500,00 - aumento de 10%; e salários de R$ 1.500,00 em diante - aumento de 5%.), e como saída,
	exiba na tela o salário antes do reajuste, o percentual de aumento aplicado, o valor do aumento
	e o novo salário, após o aumento.
*/
int main (){
	
	float salario, salarioFinal; 

	cout << "Digite o valor do seu salario:" <<endl; 
	cin >> salario;
	
	system("cls");
	
	if (salario <= 280){
		salarioFinal = salario * 1.20;
	}else if (salario > 280 and salario <= 700){
		salarioFinal = salario * 1.15;
	}else if (salario > 700 and salario <= 1500){
		salarioFinal = salario * 1.10;
	}else if (salario > 1500){
		salarioFinal = salario * 1.05;
	}
	
	
	
	cout << "Salario final com reajuste: " << salarioFinal <<" R$" <<endl;
	

	
	
	
	
	
	
	system("pause");
	return 0;
}
