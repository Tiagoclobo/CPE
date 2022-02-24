#include <iostream>

using namespace std;

int main(){
	int n,j;
	int i=0;
	int k=0;
	
	cout << "ingresse a quantidade de numeros: ";
	cin >> n;
	
	while(i<n){
		cout << "ingresse um numero: ";
		cin >> j;
		
		while(j<=0){
			cout << "Erro, ingresse novamente o numero: ";
			cin >> j;
			
		}
		
		k=k+j;
		i++;
		
		
	}
		cout << "Media = " << k/n;
	
	
	
	
	
}
