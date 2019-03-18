#include <iostream>
#include <cstdlib>

using namespace std;

//Implementar um programa que leia um valor inteiro entre 1 e 12 via teclado, em seguida, compare ao valor de mês do ano, e como saída, exiba na tela o nome do mês do ano correspondente, ou a mensagem “Mês do ano inválido!”.

int main (){
	
	int mes; 

	cout << "Digite o numero do mes:" <<endl; 
	cin >> mes;	
	
	if (mes>=1 and mes<=12){ 
		if (mes == 1){
			cout << "O numero digitado corresponde ao mes de JANEIRO"<<endl;
		}else if (mes == 2){
			cout << "O numero digitado corresponde ao mes de FEVEREIRO"<<endl;
		}else if (mes == 3){
			cout << "O numero digitado corresponde ao mes de MARÇO"<<endl;
		}else if (mes == 4){
			cout << "O numero digitado corresponde ao mes de ABRIL"<<endl;
		}else if (mes == 5){
			cout << "O numero digitado corresponde ao mes de MAIO"<<endl;
		}else if (mes == 6){
			cout << "O numero digitado corresponde ao mes de JUNHO"<<endl;
		}else if (mes == 7){
			cout << "O numero digitado corresponde ao mes de JULHO"<<endl;
		}else if (mes == 8){
			cout << "O numero digitado corresponde ao mes de AGOSTO"<<endl;
		}else if (mes == 9){
			cout << "O numero digitado corresponde ao mes de SETEMBRO"<<endl;
		}else if (mes == 10){
			cout << "O numero digitado corresponde ao mes de OUTUBRO"<<endl;
		}else if (mes == 11){
			cout << "O numero digitado corresponde ao mes de NOVEMBRO"<<endl;
		}else if (mes == 12){
			cout << "O numero digitado corresponde ao mes de DEZEMBRO"<<endl;
		}
	}else{ 
		cout << "Mes do ano invalido" <<endl; 
	}
	system("pause");
	return 0;
}
