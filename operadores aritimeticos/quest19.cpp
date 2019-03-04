#include <iostream>
#include <cstdlib>

using namespace std;

//Faça um programa que, dada a distância que se deseja percorrer e quantos quilômetros por litro que um veículo faz, calcule com quantos litros de gasolina é preciso abastecer o veículo.

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
