#include<iostream>

using namespace std;

int main(){
	start:
	int a,b,c,d,v;
	
	cin >> a >> b >> c >> d;
	
	v=(6*a)+(3*b)+(7*c)+(-5*d);
	
	cout << " " << v <<endl;
	cout<< "\n";
	
	goto start;
	
	return 1;	
}
