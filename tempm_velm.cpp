#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	
	float d,v,t,m;
	
	cout << "Informe a distancia(em km): ";
	cin >>  d;
	
	cout << "Informe a velocidade(em km/h): ";
	cin >> v;
	
	
	t = v/d;
	m = v / 3.6;
	
	cout << "O tempo medio de chegada e de: " << setprecision(2) << fixed << t << " hora(s).\n";
	cout << "A velocidade e igual a: " << m << "m/s" << endl;
	
	return 0;
}
