#include <iostream>
#include <cstdlib>

using namespace std;

//Implementar um programa que leia um valor real via teclado, que corresponde à temperatura de um paciente, em seguida, verifique se o paciente apresenta febre ou não (tomar como base a temperatura maior que 36.5 ?C para febre).

int main (){
	
	float temperatura; 

	cout << "Qual eh a temperatura do paciente?" <<endl; 
	cin >> temperatura;	
	
	if (temperatura <= 36.5){ 
		cout << "Paciente nao apresenta febre" <<endl; 
	}else{ 
		cout << "Paciente apresenta febre" <<endl; 
	}
	system("pause");
	return 0;
}
