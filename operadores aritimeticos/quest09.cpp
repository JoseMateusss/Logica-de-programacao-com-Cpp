#include <iostream>
#include <cstdlib>

using namespace std;

//Crie um programa que leia o ano atual e o ano de nascimento e mostre a idade dessa pessoa (DICA: ano atual menos ano de nascimento).

int main (){
	
	int anoAtual, anoNasceu, r;

	cout << "Digite o ano atual:";
	cin >> anoAtual;
	cout << "Em qual ano vc nasceu?";	
	cin >> anoNasceu;
	r = anoAtual - anoNasceu;
	system("cls");
	cout << "sua idade e: " <<r<<endl;
	system("pause");
	return 0;
}
