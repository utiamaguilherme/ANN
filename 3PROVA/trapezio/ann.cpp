#include <bits/stdc++.h>
#define ret return

using namespace std;

long double xn, h;

long double funcao(){
    return (pow(xn, 2));
}

long double func(int n){
    long double ans=0;
    // cout << xn << " " << h << endl;
    xn+=h;
    // cout << "xn = " << xn << endl;
    for(int i=0; i<n-1; i++){
        ans+=(2*funcao());
        xn+=h;
    }
    return ans;
}


int main(void){
    cout << "Trapezio\n";
    long double n = 4;
    long double x0 = 0, x1 = 1;
    h = (x1-x0)/n;
    // cout << "h = " << h << endl;
    long double result = funcao();
    result+=func(n);
    result+=funcao();
    result = result*(h/2);
    cout << result << " com " << n << " iterações\n";

    ret 0;
}
