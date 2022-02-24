#include <iostream>

using namespace std;

int main(){
	
	float a,b,c,d,m;
	
	cout<< "Insira o primeiro numero: ";
	cin >> a;
	
	cout << "Insira segundo numero: ";
	cin >> b;
	
	cout << "Insira o terceiro numero: ";
	cin >> c;
	
	cout << "Insira o quarto numero: ";
	cin >> d;
	
	m= ((a*1)+(b*2)+(c*3)+(d*4))/10;
	
	cout << "A media ponderada e igual a " << m << endl;
	
	return 0;	
}

