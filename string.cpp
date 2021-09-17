#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string frase;
	int npa = 0, npo = 0;// npa = palavras, npo = pontuaçao
	
	cout << "Digite uma frase: \n";
	
	getline(cin, frase);
	
	for(size_t i = 0; i<frase.size(); i++){
		if(frase[i]== ' ')
			npa++;
		if(frase[i] == '.' || frase[i] == ',' || frase[i] == ';'|| frase[i] == '?' || frase[i] == '!')
			npo++;
			
	}
	
	
	cout << "Numero de palavras: " << npa + 1 << endl;
	cout << "Numero de pontuacoes: " << npo << endl;
	return 0;
}
