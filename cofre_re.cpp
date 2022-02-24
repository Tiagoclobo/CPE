#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	float dol,rs,cota;
	
	cout << "Insira a quatidade de dolares no cofre: ";
	cin >> dol;
	
	cout << "Insira a cotacao do dolar no dia: ";
	cin >> cota;
	
	rs= dol*cota;
		
	cout <<"Ha R$" << setprecision(2) << fixed << rs << " no cofre." << endl;
	
	return 0;	
}
