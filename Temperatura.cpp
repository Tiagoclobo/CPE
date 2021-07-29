#include<iostream>

int main(){


double tempf;
double tempc;

std::cout << "Temperatura em F: ";
std::cin >> tempf;

tempc= (tempf - 32)/1.8;

std::cout <<" Esta Fazendo: " << tempc << " Graus Celsius\n ";
}
