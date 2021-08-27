#include<iostream>
using namespace std;

	int main(){
		
	int primeiro,segundo,auxiliar;
	cout << "Digite o perimeiro numero inteiro: ";
	cin >> primeiro;
	cout << "Digite o segundo numero inteiro: ";
	cin >> segundo;
	primeiro += segundo;/* += e a= a+b */
	segundo = primeiro - segundo;
	primeiro -= segundo;/* -= e a= a -b */
	cout << "primeiro=" << primeiro << endl;
	cout << "segundo=" << segundo << endl;
	return 0;
}
