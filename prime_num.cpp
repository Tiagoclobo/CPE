#include<iostream>

using namespace std;

int main(){
	
	int n,div;/* n = numero, div = divisor que vai aumentando, 
	n_exato = num de vezes que de exato que comeca com zero e vai subindo*/
	cin >> n;
	while(n>=0){
		if(n == 2){
			cout  << "primo\n";
		}
		if(n == 1 || n == 0){
			cout << "nao primo\n";
			cin >> n;
		} else{
			for(div = 2; div < n; div ++){
				if((n % div) == 0){
					cout << "nao primo\n"; // se der uma ou mais vez exato ja nao e primo
					break; // da uma marcada
				}
				if(n == 2){
					cout << "primo\n";
					break;
				}
				if(div == (n-1)){
					cout << "primo\n";
					break;
				}
				
			}
		
		
	cin >> n;			
	}
}
	return 0;	
	}
