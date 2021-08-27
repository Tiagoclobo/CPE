#include<iostream>

using namespace std;

int main(){
	double a,b,c;
	
	cin >> a >> b >> c;
	if(a<b+c){
		if(a==b && b==c)
			cout << "equilatero" << endl;
		if(a!=b && b!=c && a!=c)
			cout << "escaleno" << endl;
		if(a==b && b!=c)
			cout << "isosceles" << endl;
		if(a==c && c!=b)
			cout << "isosceles" << endl;
		if(b==c && c!=a)
			cout << "isosceles" << endl;		
	}else{
		cout << "invalido" << endl;
	}
	
	return 0;
}
