#include <bits/stdc++.h>

#define E 2.7182
#define logE(x) log(x)/log(E)

using namespace std;

float f(float x) {
   return (x * logE(x) - 1);
}

int main(){
    double a, b, erro, tam, M, i;
    int teor = 0;

    cin >> a >> b >> erro;
    cout << endl;

    teor = (f(a)*f(b) > 0? 0 : 1);

    while(teor == 0){
        cin >> a >> b;
        teor = (f(a)*f(b) > 0? 0:1);
    }
    i = logE(b-a);
    i -= logE(erro);
    i /= log(2);
    i = ceil(i);

    cout << i << " Iteracoes" << endl;

    if((f(a) == 0) or (f(b) == 0)){
        cout << "O valor de "<< (f(a) == 0? a:b) << " e zero da expressao\n";
        return 0;
    }
    tam = b-a;
    while(tam > erro){
        tam = b-a;
        M = (a+b)/2;
        if(f(M) == 0){
            cout << "Solucao encontrada, x = " << M << endl;
            return 0;
        }

        if(f(a)*f(M) < 0)   b = M;
        else    a = M;
    }

    cout << "Intervalo final: [" << a << "," << b << "]\n Solucao aproximada de " << (a+b)/2 << endl;

    return 0;
}
