#include <iostream>
#include <cstdlib>

using namespace std;

/*
	Implementar um programa que leia dois valores reais via teclado, que correspondem as notas de
	um aluno, em seguida, calcule a m�dia aritm�tica entre elas e verifique se o aluno est� aprovado
	ou reprovado (o aluno � aprovado quando a m�dia for maior ou igual a 7), e como sa�da, exiba
	na tela a mensagem �Aluno aprovado� ou �Aluno reprovado�.
*/
int main (){
	
	float n1, n2, media; 

	cout << "Digite a primeira nota:" <<endl; 
	cin >> n1;
	
	cout << "Digite a segunda nota:" <<endl; 
	cin >> n2;
	system("cls");
	media = (n1 + n2)/2;
	if (media > 7.0){
		cout << "Aluno aprovado "<<endl;
	}else{
		cout << "Aluno reprovado"<<endl;
	}
	
	
	system("pause");
	return 0;
}
