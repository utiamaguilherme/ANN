#include <iostream>
#include <math.h>

#define e 2.718281828
using namespace std;


 long double func(int n){
	return 2/(n*2);
}

 long double funcao(long double n){
	return cos(n);
}


int main(int argc, char const *argv[])
{
	cout << "Metodo da secante com a funcao x^2-x = 0\n";
	long double a = 1.5, b = 0.5, c, i = 0;
	while(true){
		// cout << cos(a) << endl;
		i++;
		c = ((pow(3.2,2)-3.2) + (pow(3.1,2)-3.1))/((b*pow(3.2,2)-3.2)-a*pow(3.1,2)-3.1);
		cout << c << endl;
		// c = c/(cos(a) - cos(b));
		if(abs(c) < 0.009 or abs(b-a) < 0.009)
			break;
		a = b;
		b = c;
		// cout << c << endl;

	}
	cout << c << " iteracoes: " << i << endl;
	return 0;
}