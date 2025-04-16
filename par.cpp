#include <iostream>
using namespace std;

// PROGRAMA PARA DISTINGUIE SI UN NUMERO ES PAR
// ANGEL EDUARDO MUÑOZ PEREZ [15.04.25]
int main(){

	int numero;
	cin>>numero;
	if(numero % 2 == 0){     // si el residuo de dividir el numero entre dos se parece a 0
		cout<<"es par :)";
	}else{
		cout<<"no es par :(";
	}

return 0;
}
