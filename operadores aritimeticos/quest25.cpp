#include <iostream>
#include <cstdlib>

using namespace std;

//Crie um programa que leia do usuário um número e apresente na tela a tabuada de multiplicação desse número.
int main (){
	
	int numero;
	cout << "Digite um numero:"<<endl;
	cin >> numero;
	system("cls");
	cout << "  Tabela de multiplicacao do numero 09:\n"<<endl;
	cout << "  0 x "<<numero <<"= " <<numero * 0<<endl;
	cout << "  1 x "<<numero <<"= " <<numero * 1<<endl;
	cout << "  2 x "<<numero <<"= " <<numero * 2<<endl;
	cout << "  3 x "<<numero <<"= " <<numero * 3<<endl;
	cout << "  4 x "<<numero <<"= " <<numero * 4<<endl;
	cout << "  5 x "<<numero <<"= " <<numero * 5<<endl;
	cout << "  6 x "<<numero <<"= " <<numero * 6<<endl;
	cout << "  7 x "<<numero <<"= " <<numero * 7<<endl;
	cout << "  8 x "<<numero <<"= " <<numero * 8<<endl;
	cout << "  9 x "<<numero <<"= " <<numero * 9<<endl;
	cout << "  10 x "<<numero <<"= " <<numero * 10<<endl;
	
	
	
	system("pause");
	return 0;
}
