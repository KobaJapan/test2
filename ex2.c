#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int Factorial(int n){
    int y=1;
    for(int i=1;i<=n;i++){
        y = y*i;
    }
    return y;
}

double mysin(double x){
    double y=0;
    for(double i=0;i<=6;i++){
        y=y+(pow(-1,i))*(pow(x,(i*2+1)))/Factorial(i*2+1);
    }
    return y;
}

int main(void){
    double x;
    printf("Input x:");
    scanf("%lf",&x);
    printf("sin(x)=%lf\n",sin(x));
    printf("my_sin(x)=%lf\n",mysin(x));
    return 0;
}