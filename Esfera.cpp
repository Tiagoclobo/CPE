#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	// variaveis
	double r,ae,vo;
	//colocar raio
	cin >> r;
	//valor aerea e volume
	ae= 4*3.14*(r*r);
	vo=4*3.14*(r*r*r)/3;
	//saida aerea sem e com decimais
	cout << "area = " << fixed << setprecision(0) << ae << ", ";
	cout << fixed << setprecision(3) << ae << "\n";
	//saida volume sem e com decimais
	cout << "volume = " << fixed << setprecision(0) << vo << ", ";
	cout << fixed << setprecision(3) << vo << endl;
	return 0;
	
}
