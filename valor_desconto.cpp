#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int a;
	
	
	cout << "Insira o valor do produto: ";
	cin >> a;
	
	cout << "Valor do produto com desconto: " << setprecision(2) << fixed <<(a * 0.91) << endl;
	
	return 0;
}
