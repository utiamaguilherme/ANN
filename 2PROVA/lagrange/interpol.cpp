#include <bits/stdc++.h>
#define l 3
#define c 3

using namespace std;

int main(){
int n, i, j;
double x[l],y[l], L[l], xa, Pn;
cin>>xa;

for(i=0; i<l; i++){
    cin>>x[i];
    cin>>y[i];
}
Pn=0;
for(i=0; i<l;i++){
      L[i]=1;
	for(j=0;j<c;j++)
            if(j!=i)	
           		L[i]=L[i]*((xa-x[j])/(x[i]-x[j]));


     	Pn+=L[i]*y[i];
     	cout << Pn << " " << i << endl;
}

cout<<"\nO valor da funcao para x = "<<xa<<" eh "<<Pn<<"."<<endl;

}


