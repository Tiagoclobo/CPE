#include <iostream>

using namespace std;

double* concatena(double p1[], int n1, double p2[], int n2){
	double *p3;
	//aloca dinamicamente um terceiro vetor de p3 de ni+n2
	p3 = new double[n1 + n2];
	//copia os valores de p1 a partir do inicio de p3
	for(int i=0; i<n1; i++)
		p3[i] = p1[i];
	//copia os valores de p2 da posicao que parou na etapa 2 em p3
	for(int i=n1; i<n1 + n2; i++)
		p3[i] = p2[i - n1];
	//retorno p3
	return p3;		
}

int main(){
	int t1, t2;
	double *v1, *v2, *v3;
	
	cout << "Dimensao da lista 1: ";
	cin >> t1;
	v1 = new double[t1];
	cout << "Digite os valores separados por espaço: ";
	for(int i=0; i<t1; i++)
		cin >> v1[i];
		
		cout << "Dimensao da lista 2: ";
	cin >> t2;
	v2 = new double[t2];
	cout << "Digite os valores separados por espaço: ";
	for(int i=0; i<t2; i++)
		cin >> v2[i];	
		
	v3 = concatena(v1, t1, v2, t2);
	
	cout << "Concatenacao:\n";
	for(int i=0; i<t1+t2; i++)
		cout << v3[i] << " ";
	cout << endl;	
		
	return 0;
}
