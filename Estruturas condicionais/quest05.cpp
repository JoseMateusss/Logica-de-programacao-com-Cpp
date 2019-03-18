#include <iostream>
#include <cstdlib>

using namespace std;

/*
	Implementar um programa que leia dois valores reais vai teclado, que correspondem as notas de
	aluno, em seguida, calcule a sua média, e como saída exiba na tela o conceito da média (Entre
	9.0 e 10.0 – conceito A; entre 7.5 e 9.0 – conceito B; entre 6.0 e 7.5 – conceito - C; entre 4.0 e
	6.0 – conceito D; e entre 4.0 e zero – conceito E).
*/
int main (){
	
	float nota1, nota2, media; 

	cout << "NOTA 01:" <<endl; 
	cin >> nota1;
	
	cout << "NOTA 02:" <<endl; 
	cin >> nota2;
	system("cls");
	
	media = (nota1 + nota2)/2; 	
	cout << media<< endl;
	
	if (media>=9.0 and media<=10.0){ 
		cout << "Conceito A"<<endl;
	}else if (media>=7.5 and media<9.0){
		cout << "Conceito B"<<endl;
	}else if (media>=6.0 and media<7.5){
		cout << "Conceito C"<<endl;
	}else if (media>=4.0 and media<6.0){
		cout << "Conceito D"<<endl;
	}else if (media>=0 and media<4.0){
		cout << "Conceito E"<<endl;
	}
	system("pause");
	return 0;
}
