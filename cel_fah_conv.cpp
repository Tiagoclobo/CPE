#include <iostream>

using namespace std;

int main(){
	
	int cel,fah;
	
	cout << "Insira a temperatura em Celsius: ";
	cin >> cel;
	
	fah= (9*cel+160)/5;
	
	cout << "Temperatura em Fahrenheit: " << fah << " Graus" << endl;
	
	return 0;
}
