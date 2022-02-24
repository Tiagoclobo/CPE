#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int l,p2,a;
	
	cout << "Insira o tamanho lado do quadrado: ";
	cin >> l;
	
	p2 = l*4;
	a = pow(l,2);
	
	cout << "A area do quadrado e igual a: " << a << "\n";
	cout << "O perimetro do quadrado e igual a: " << p2 << endl;
	
	return 0;
}

