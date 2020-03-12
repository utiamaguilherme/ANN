#include <bits/stdc++.h>

using namespace std;


int main(void){

    float x[] = {-1, 0, 1, 2};
    float y[] = {-1, 1, 3, 5};
    float totalx = 0;
    float totaly = 0;
    float totalsx = 0;
    float totalxy = 0;
    int n = sizeof(x)/sizeof(float);
    // somatorias
    for(int i = 0;i<n;i++){
        totalx += x[i];
        totaly += y[i];
        totalsx += pow(x[i],2);
        totalxy += (x[i]*y[i]);
    }
    float b1p2 = 1;
    float a1p2 = totalx / n;
    float soma1p2 = totaly / n;
    float b2p2 = totalx-(b1p2*totalx);
    float a2p2 = totalsx-(a1p2*totalx);
    float soma2p2 = totalxy-(soma1p2*totalx);
    float b1p3 = b1p2;
    float a1p3 = a1p2;
    float soma1p3 = soma1p2;
    float a2p3 = 1;
    float soma2p3 = soma2p2 / a2p2;
    float final_a = soma2p3 / a2p3;
    float final_b = soma1p3 - a1p3 * final_a;

    printf("\nValor A= %.4f e valor de B= %.4f\n\n Sendo assim, Ax+B\n\n", final_a, final_b);

}