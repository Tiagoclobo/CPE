#include<iostream>

using namespace std;

int main(){

	double nota,x,media,n;
	x = 0;
	n = 0;
	cout << "Insira a nota: ";
	cin >> nota;
	
	while(nota!=-1){
		x += nota;
		n += 1;
		cout << "Insira a nota: ";
		cin >> nota;
		media = x /n;
	}
	cout << media << endl;
	return 0;
}
