#include <iostream>
#include <string>

using namespace std;

int conta(string s, char c){
	int contagem = 0;
	
	for(unsigned int i=0; i < s.size(); i++){
		if(s[i == c])
			contagem++;
	}
	
	return contagem;
}

int main(){
	string texto;
	char simbolo;
	int nocorrencias;
	
	cout << "Digite uma frase: \n";
	getline(cin, texto);
	cout << "Digite um simbolo para pesquisar: ";
	cin >> simbolo;
	
	nocorrencias = conta(texto,simbolo);
	
	cout << nocorrencias << " ocorrencias do simbolo " << simbolo << "na frase\n";
	
	return 0;
}
