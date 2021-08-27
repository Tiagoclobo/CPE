#include<iostream>
#include<iomanip>

using namespace std;

int main (){
	// Notas e medias
	string name;
	double pa,pb,t1,t2,t3,mp,mt,mf;
	// Ler nome
	cout << "Insira o nome do aluno:";
	cin >> name;
	// Ler as notas das provas
	cout << "Insira a nota das provas:\n";
	cin >> pa >> pb;
	// Ler as notas dos trabalhos
	cout << "Insira a nota dos trabalhos:\n";
	cin >> t1 >> t2 >> t3;
	// Valores da conta
	mp= (2*pa + 3*pb)/5;
	mt= (t1 + t2 + t3);
	mf= (0.75 * mp) + (0.25*mt);
	// Saida
	cout << name << ": ";
	cout<< setprecision (1) << fixed << mf << endl;
	return 0;
		
}
