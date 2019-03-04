#include <iostream>
#include <cstdlib>

using namespace std;

//#include <iostream>
#include <cstdlib>

using namespace std;

//Faça um programa que, dada a quantidade de litros abastecidos e o preço do litro da gasolina, calcule o valor total da conta a ser paga em um posto de gasolina.
int main (){
	
	double preco, quantidadeLitros, total;

	cout << "Quantidade de litros abastecidos:";
	cin >> quantidadeLitros;
	
	cout << "Valor por litro de gasolina:";
	cin >> preco;
	
	total = quantidadeLitros * preco;
	system("cls");
	cout << "Valor da conta total: " <<total<<endl;
	system("pause");
	return 0;
}


