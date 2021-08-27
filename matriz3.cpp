#include<iostream>

using namespace std;

int main(){
	start:
	int a,b,c,v;
	
	cin >> a >> b >> c;
	
	v=(-8*a)+(0*b)+(3*c);
	
	cout << " " << v <<endl;
	cout<< "\n";
	
	goto start;
	
	return 1;	
}
