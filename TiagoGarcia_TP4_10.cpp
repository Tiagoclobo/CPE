#include <iostream>

using namespace std;

int main(){
	
	int numv,numq,h;
	
	cout << "ingresse o numero de velas: ";
	cin >> numv;
	
	cout << "ingresse o numero de velas queimadas necessarias para fazer uma nova: ";
	cin >> numq;
	
	h= numv + (numv/numq);
	
	cout << h << " horas garantidas." << endl;
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
}
