#include<iostream>

int main(){
	
	double valorx;
	double valora;
	double valorb;
	double valorc;	
	double valory;
	
	std::cout << "Qual o valor de x?";
	std::cin >> valorx;
	
	std::cout << "Qual o valor de a ?";
	std:: cin >> valora;
	
	std::cout <<"Qual o valor de b?";
	std::cin >> valorb;
	
	std::cout <<"Qual o valor de c ?";
	std::cin >> valorc;
	
	valory=(valora * valorx * valorx) + (valorb * valorx) + valorc;
	
	std::cout << "A funcao vale :" << valory << "unidades \n";
}
