#include<iostream>

using namespace std;

int main(){
	float a,b,c;
	
	cin >> a >> b >> c;
	
	if(a<=b && a<=c){//a menor
		cout << a << ' ';
		if(b<=c)
		cout<< b << ' ' << c << endl;
		
		else
		cout<< c << ' ' << b << endl;
	}
	if(b<=a && b<=c){// b menor
		cout << b << ' ';
		if(a<=c)
		cout<< a << ' ' << c << endl;
		
		else
		cout<< c << ' ' << a << endl;
	}
	if(c<=a && c<=b){// c menor
		cout << c << ' ';
		if(a<=b)
		cout<< a << ' ' << b << endl;
		
		else
		cout<< b << ' ' << a << endl;
	}
	return 0;
}

