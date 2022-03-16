#include <iostream>

using namespace std;

int main(){
	
	int x1[3];
	int x2[3];
	int pe;
	
	cout << "Digite os valores do primeiro vetor: ";
	cin >> x1[0] >> x1[1] >> x1[2];
	
	cout << "Digite os valores do segundo vetor: ";
	cin >> x2[0] >> x2[1] >> x2[2];
	
	pe = (x1[0]*x2[0])+(x1[1]*x2[1])+(x1[2]*x2[2]);
	
	cout << "Produto escalar igual a: " << pe;
	
	return 0;
}
