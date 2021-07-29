#include<iostream>

int main(){
	
	double peso,altura,bmi;
	
	std::cout << "Insira seu peso:";
	std::cin >> peso;
	
	std::cout << "Insira sua altura : ";
	std::cin >> altura;
	
	bmi= peso / (altura * altura);
	
	std::cout << "Seu BMI e :" << bmi << "\n";
	
	return 0;
	
	
	
}
