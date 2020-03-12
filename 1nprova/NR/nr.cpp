#include <iostream>
#include <math.h>

#define e 2.718281828
using namespace std;


 long double func(int n){
	return 2/(n*2);
}

 long double funcao(long double n){
	return n/2 + (2/(n*2));
}


int main(int argc, char const *argv[])
{
	cout << "Metodo de NR com a funcao x^2 - a = 0\n";
	long double pt = 1.3;
	int i=0;
	while(true){
		i++;
		
		// cout << i++ << endl;
		pt = (funcao(pt));
		cout << pt  << endl;
		if((pow(pt,2)-2) < 0.000009)	
		break;
	}
	cout << pt << " < 10^-5\n";
	cout << pow(pt,2)-2  << " com " << i << "iteracoes" << endl;

	return 0;
}