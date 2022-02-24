#include <iostream>

using namespace std;

void le_polinomio(double coef[], int& grau){
	cout << "Informe o grau(max. 25): ";
	cin >> grau;
	while(grau < 0|| grau >25){
		cout << "Grau invalido.Informe o grau novamente: ";
		cin >> grau;
	}
	for(int i=grau; i>=0; i--){
		cout << "Informe o coeficiente do termo x^" << i << ": ";
		cin >> coef[i];
	}
}
	
void imprime_polinomio(double coef[], int grau){
		cout << coef[grau] << "x^" << grau;
		for(int i=grau-1; i>=0; i--){
			if(coef[i != 0]){
			if(coef[i]>0)
				cout << " + " << coef[i] << "X^" << i;
			else
				cout << " - " << -coef[i] << "x^" << i;	
			}
		}
		cout << "\n";
	}
	
void calcula_derivada(double coef[], int& grau){
		for(int i=1; i<=grau; i++){
			coef[i-1] = i*coef[i];
		}
		grau--;
	}
	
	
int main(){
		double poli[26];
		int ordem;
		
		le_polinomio(poli, ordem);
		while(ordem>=0){
			imprime_polinomio(poli, ordem);
			calcula_derivada(poli, ordem);
		}
		
		return 0;
	}
