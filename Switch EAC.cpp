#include <iostream>

using namespace std;

int main(){
	char b;
	double a,c;
	cin >> a  >> b >> c;
	switch(b){
		case '+' :
		cout << a + c <<"\n";
		break;
		case '*':
		 cout << a * c <<"\n";
		break;
		case '/':
			cout << a / c <<"\n";
		break;
		case '-':
			cout << a - c<<"\n";
		break;	
		default:
			cout << "Operador invalido!\n";
		
	}
	return 0;
}
