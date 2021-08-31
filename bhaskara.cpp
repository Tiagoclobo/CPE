  
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	
	double a,b,c,d,x1,x2,r1,r2;

	cin >> a >> b >> c;
	d=(b*b)-(4*a*c);//delta
	if(d >= 0){
		x1 = (-b + sqrt(d))/(2*a); 
		x2 = (-b - sqrt(d))/(2*a);
		cout <<fixed << setprecision(2) << "x1 = " << x1 << "\n";
		cout << fixed << setprecision(2) <<"x2 = " << x2 <<endl;
		 
	}
	else{
		x1 = -b / (2*a); 
		x2 = -b / (2*a);
		r1 = (sqrt(-d))/(2*a);
		r2 = (sqrt(-d))/(2*a);
		cout <<fixed << setprecision(2) << "x1 = " << x1 << " + " << r1 << "i\n";
		cout << fixed << setprecision(2) <<"x2 = " << x2 << " - " << r2 << "i" <<endl;
	}
	return 0;
}
