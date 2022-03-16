#include <iostream>

using namespace std;

int main(){
	int n=5;
	int inteiros[n];
	int i=0;
	int maior=0;
	int menor=0;
	
	while(i<n)
	{
		cout << "ingresse o numero " << i+1 << ": " << "\n";
		cin >> inteiros[i];
		
		if(i==0){
			maior=inteiros[i];
		}
		
		if(inteiros[i]>maior){
			maior=inteiros[i];
		}
		
		if(i==1){
			menor=inteiros[i];
		}	
		
		if(inteiros[0]<inteiros[1]){
			menor=inteiros[0];
		}
		
		
		if(inteiros[i]<menor){
			menor=inteiros[i];
		}
	
		i=i+1;		
	}
		cout << maior << " - " << menor << "= " << maior-menor;	
	
	return 0;

}
