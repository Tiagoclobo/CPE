#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	float c1,c2,h1,h2;
	
	cout << "Informe os catetos: ";
	cin >> c1 >> c2;
	
	h1 = pow(c1,2)+pow(c2,2);
	h2 = sqrt(h1);

	cout << "A hipotenusa e igual a: " << h2 << endl;
	
	return 0;
}
