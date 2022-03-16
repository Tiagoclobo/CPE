#include <iostream>

using namespace std;

int main(){
	
	int a;
	int i=0;
	
	cout << "Insira um numero: ";
	cin >> a;
	
	while(a>0){
		i=i+a;
		cout << "Insira um numero: ";
		cin >> a;
	}
	cout << "A soma dos numeros positivos e igual a: " << i << endl;

	return 0;	
}
