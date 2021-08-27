#include<iostream>

using namespace std;

int main(){
	int d1,d2,m1,m2,a1,a2;
	
	cin >> d1 >> m1 >> a1;
	cin >> d2 >> m2 >> a2;
	
	if((a1<a2) || (a1==a2 && m1<m2) || (a1==a2 && m1==m2 && d1<d2) ) {
		cout << d1 << "/" << m1 << "/" << a1 << " ocorreu antes.\n";
	} else {
		cout << d1 << "/" << m1 << "/" << a1 << " ocorreu depois.\n";		
	}	
	return 0;
	 	
}
