#include <iostream>

using namespace std;

int main(){
	
	float a,b,val,por;
	
	cout << "Insira o custo do produto: ";
	cin >> a;
	
	cout << "Insira a porcentagem de acrescimo: ";
	cin >> b;
	
	por = (a/100)*b;
	
	val = a + por;
	
	cout << "O valor de venda e igual a: " << val << endl;
	
	return 0;
}
