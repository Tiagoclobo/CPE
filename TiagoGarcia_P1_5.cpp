#include <iostream>

using namespace std;

int main(){
	
	float m,km,ft;
	int i;
	
	cout << "Insira a quantidade de metros: ";
	cin >> m;
	
	km = m/1000;
	ft = m*3.28;
	
	cout << "Digite: 1 para converter para km. 2 para converter para pes: ";
	cin >> i;
	
	switch(i){
		case 1:
			cout << km << "km.";
			break;	
		case 2:
			cout << ft << " pes.";
			break;	
	}
		return 0;	
}
