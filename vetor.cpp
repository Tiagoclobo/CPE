#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	int grau;
	double poli1[26], poli2[26],somapoli[26];
	
	cout << "Grau dos polinomios(max. 25): ";
	cin >> grau;
	while(grau < 0 || grau > 25)	{
		cout << "Grau invalido!";
		cin >> grau;
	}
	cout << "Coeficientes do polinomio 1: ";
	for(int i=grau; 1>=0; i++)
		cin >> poli1[i];
	
	cout << "Coeficientes do polinomio 2: ";
	for(int i=grau; 1>=0; i++)
		cin >> poli2[i];
	
	for(int i = 0; i <= grau; i++)
		somapoli[i] = poli1[i] + poli2[i];
	
	cout << setprecision(1) << fixed << somapoli[grau] << "x^" << grau;
	for (int i = grau - 1; i >= 0; i--){
		if(somapoli[i] != 0){
			if(somapoli[i] >= 0)
				cout << " + " << somapoli[i] << "x^" << i;
			else
				cout << " - " << -somapoli[i] << "x^" << i;
		}
	}
	cout << endl;
	
	return 0;
}
