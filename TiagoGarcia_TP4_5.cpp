#include <iostream>

using namespace std;

int main(){
	
	int n;
	int c1=0;
	int c2=0;
	int c3=0;
	int c4=0;
	int null=0;
	int blank=0;
	
	cout << "ingresse os votos: ";
	cin >> n;
	
	while(n!=0){
		
		if(n==1){
			c1++;
		}
		if(n==2){
			c2++;
		}
		if(n==3){
			c3++;
		}
		if(n==4){
			c4++;
		}
		if(n==5){
			null++;
		}
		if(n==6){
			blank++;
		}
	
		cin >> n;
			
		}
			
	
	
	cout << "Votos para o candidato 1: " << c1 << "\n";
	cout << "Votos para o candidato 2: " << c2 << "\n";
	cout << "Votos para o candidato 3: " << c3 << "\n";
	cout << "Votos para o candidato 4: " << c4 << "\n";
	cout << "Votos nulos: " << null << "\n";
	cout << "Votos em branco: " << blank << "\n";
	
		
}
