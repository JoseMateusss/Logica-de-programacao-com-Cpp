#include <iostream>
#include <cstdlib>

using namespace std;

//Fa�a um programa que, dada a dist�ncia que se deseja percorrer e quantos quil�metros por litro que um ve�culo faz, calcule com quantos litros de gasolina � preciso abastecer o ve�culo.

int main (){
	
	double distancia, litroKm, quantidadeLitros;

	cout << "Quantidade de Km:";
	cin >> distancia;
	
	cout << "Litros por Km:";
	cin >> litroKm;
	
	quantidadeLitros = distancia / litroKm;
	system("cls");
	cout << "Voce tem que abastecer: " <<quantidadeLitros<<endl;
	system("pause");
	return 0;
}
