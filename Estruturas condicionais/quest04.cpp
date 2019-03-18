#include <iostream>
#include <cstdlib>

using namespace std;

//Implementar um Programa que leia valor inteiro via teclado, em seguida, compare ao valor do dia da semana, e como saída, exiba na tela o nome do dia da semana, ou a mensagem “Dia da semana inválido”.

int main (){
	
	int dia; 

	cout << "Digite o numero do dia:" <<endl; 
	cin >> dia;	
	
	if (dia>=1 and dia<=12){ 
		if (dia == 1){
			cout << "DOMINGO"<<endl;
		}else if (dia == 2){
			cout << "SEGUNDA"<<endl;
		}else if (dia == 3){
			cout << "TERCA"<<endl;
		}else if (dia == 4){
			cout << "QUARTA"<<endl;
		}else if (dia == 5){
			cout << "QUINTA"<<endl;
		}else if (dia == 6){
			cout << "SEXTA"<<endl;
		}else if (dia == 7){
			cout << "SABADO"<<endl;
		}
	}else{ 
		cout << "Dia da semana invalido" <<endl; 
	}
	system("pause");
	return 0;
}
