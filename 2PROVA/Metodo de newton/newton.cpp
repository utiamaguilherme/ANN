#include <bits/stdc++.h>

#define ret return

using namespace std;

// double fun(double a){
// 	ret (a*a)/(a*(-1));
// }

int main(void){
	double ans = 0., xi = 0., xn = 0., fx = 0., fdx = 0., erro = 0.;// fdxn derivada de fxn
	cin >> xn >> erro;
	int k=0;
	cout << erro << endl;

	do{
		xi = xn;
		fx = (pow(xi,3) - 2*xi + 6); //funcao
		fdx = 3*pow(xi,2) - 2;      //derivada da funcao
		xn = xi - (fx/fdx);
		k++;
		cout << "iteração " << k << endl;
		cout << "x inicial = " << xi << " x novo = " << xn << endl; 
		cout << "xn: " << fabs(xn - xi) << " - fdx: " << fabs(fdx) <<  endl << endl;
	}while(fabs(xn - xi) >= erro and fabs(fdx) >= erro);

	cout << "solução final : " << xn << endl;
	return 0;
}