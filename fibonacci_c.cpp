#include <iostream>

using namespace std;

int fibonacci(int n)
{
if (n < 1) 
	return n + 1; 
	return fibonacci(n - 1) + fibonacci(n - 2); 
}
int main()
{
	
	int n;
	cin >> n;
	while(n>0){
		cout <<"F(" << n << ") = " << fibonacci(n - 1) << "\n";
		cin >> n;
      }
	return 0;
}

