#include <iostream>

using namespace std;

int main(){
	int var_holder, q_par = 0, total_par = 0, q_impar = 0, total_impar = 0;

	cin >>  var_holder;//valor dos numero
	while(var_holder != 0){
		if((var_holder % 2) == 0){
			q_par ++;
			total_par += var_holder;
		}else{
			q_impar ++;
			total_impar += var_holder;
		}
		cin >> var_holder;
	}
	cout << q_impar << " impares, total = " << total_impar << "\n";
	cout << q_par << " pares, total = " << total_par << endl;
	return 0;
}

