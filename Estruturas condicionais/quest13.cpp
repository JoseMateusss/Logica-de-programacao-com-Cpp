#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;


int main (){
	
	
	float a,b,c, delta, x1, x2;
	 


	cout << "Digite o valor de A:" <<endl; 
	cin >> a;
	
	cout << "Digite o valor de B:" <<endl; 
	cin >> b;
	
	cout << "Digite o valor de C:" <<endl; 
	cin >> c;
	
	system("cls");
	
	delta =  pow(b,2) - 4 * a * c;
	
	if (delta < 0){
		cout << "A equação não tem raízes"<<endl;
	}else{
		x1 = -b + (sqrt(delta)) / 2 * a;
		x2 = -b - (sqrt(delta)) / 2 * a;
		
		cout << "Valor de x': "<<x1<<endl;
		cout << "Valor de x'': "<<x2<<endl;
	}
	
	
	
	

	
	
	system("pause");
	return 0;
}
