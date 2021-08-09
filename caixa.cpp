#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	// valores das notas
	double valor,l;
	int a,b,c,d,e,f,g,h,i,j,k;
	
	/*o numero de notas e so dividir o valor,
	ir fazendo o valor menos o num de notas 
	vezes o valor na nota*/
	
	cin >> valor;
	
	a = valor/100;
	valor = valor - (a*100);
	
	b = valor/50;
	valor = valor -(b*50);
	
	c = valor/20;
	valor = valor - (c*20);
	
	d = valor/10;
	valor = valor - (d*10);
		
	e = valor/5;
	valor = valor - (e*5);
	
	f = valor/2;
	valor = valor - (f*2);
	
	g = valor/1;
	valor = valor - (g*1);
	// nao esquecer de usar . ao inves de ,
	// usar * aon inves de /
	h = valor/0.50;
	valor = valor - (h*0.50);
	
	i = valor/0.25;
	valor = valor - (i*0.25);
	
	j = valor/0.10;
	valor = valor - (j*0.10);
	
	k = valor/0.05;
	valor = valor - (k*0.05);
	
	l = valor/0.01;
	valor = valor - (valor*0.01);
	/*saida das quantidades
	usar , ao inves de . na saida */	
	cout << a << " nota(s) de R$100\n";
	cout << b << " nota(s) de R$50\n";
	cout << c << " nota(s) de R$20\n";
	cout << d << " nota(s) de R$10\n";
	cout << e << " nota(s) de R$5\n";
	cout << f << " nota(s) de R$2\n";
	cout << g << " moeda(s) de R$1\n";
	cout << h << " moeda(s) de R$0,50\n";
	cout << i << " moeda(s) de R$0,25\n";
	cout << j << " moeda(s) de R$0,10\n";
	cout << k << " moeda(s) de R$0,05\n";
	cout << fixed << setprecision(0) <<  l << " moeda(s) de R$0,01\n";
	return 0;
}
