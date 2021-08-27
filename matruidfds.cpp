#include<iostream>

using namespace std;

int main(){
	start:
	int l1,l2,l3,l4,c1,c2,c3,c4,v;
	
	cin >>l1 >> l2 >> l3 >> l4;
	cin >>c1 >> c2 >> c3 >> c4;
	
	v=(l1*c1)+(l2*c2)+(l3*c3)+(l4*c4);

	cout <<"  " << v << endl;
	cout << " \n";
	goto start;
	return 0;
}
