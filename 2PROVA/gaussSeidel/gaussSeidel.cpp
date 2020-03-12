#include <bits/stdc++.h>

using namespace std;

int main(void){
	double ma[3][3], xAnt[3], ans[3], xProx[3];
	int n = 5; // 5 iterações;
	cout << "Matriz\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			ma[i][j] = rand() % 100; // preenche a matriz
			cout << ma[i][j] << " ";
		}
		cout <<  endl;
	}
	cout << "\nVetor B:\n";
	for(int i=0; i<3; i++){
		ans[i] = rand() % 100; // solucao do vetor B
		cout << ans[i] << endl;
	}
	cout << endl;

	cout << "Chutes iniciais:\n";
	for(int i=0; i<3; i++){
		xAnt[i] = ans[i]/ma[i][i]; // valores iniciais(chutes)
		cout << xAnt[i] << endl;
	}

	cout << "Começando as resoluções com as iterações:\n";

	for(int i=0; i<n; i++){
		int k=0;
		xProx[k] = (1/ma[k][k])*(ans[k] - ma[k][k+1]*xAnt[k+1] - ma[k][k+2]*xAnt[k+2]);
		xAnt[k] = xProx[k];
		k++;
		xProx[k] = (1/ma[k][k])*(ans[k] - ma[k][k-1]*xAnt[k-1] - ma[k][k+1]*xAnt[k+1]);
		xAnt[k] = xProx[k];
		k++;
		xProx[k] = (1/ma[k][k])*(ans[k] - ma[k][k-2]*xAnt[k-2] - ma[k][k-1]*xAnt[k-1]);
		xAnt[k] = xProx[k];
		
		int j=0;
		cout << "valores para o proximo chute: \n";
		cout << j << " -> " << xProx[j] << endl;
		j++;
		cout << j << " -> " << xProx[j] << endl;
		j++;
		cout << j << " -> " << xProx[j] << endl;
		j++;
	}
	cout << "Criterio era fazer quantidade de iterações que quisesse\n";

	return 0;
}