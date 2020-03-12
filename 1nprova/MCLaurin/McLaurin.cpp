#include <iostream>
#include <math.h>

#define e 2.718281828
using namespace std;


int fat(int n){
	if(n == 0 or n == 1)	return 1;
	return fat(n-1)*n;
}

double funcao(int n, int value){
	double ans = 0;
	double um = pow(e,value);

	ans = pow(pow(um,n),-5);
	if(n%2)	return (ans*value)/fat(n);
	return (-1*ans*value)/fat(n);
}


int main(int argc, char const *argv[])
{
	cout << "Erro de truncamento McLaurin:\n";

	double ans = pow(e,-5);

	for(int i=1; i<=8; i++){
		ans+= funcao(i, -5);
	}
	cout << ans << endl;

	return 0;
}