//Mi primer programa básico en C
#include <stdio.h>
#include <stdlib.h>

double suma(float a, float b);
double resta(float a, float b);
double multi(float a, float b);
double division(float a, float b);
void imprimir(float n1, float n2);

int main()
{
    double resultado,n1,n2;
    n1=25.6;
    n2=85.36;
    imprimir(n1,n2);
    return 0;
}

double suma(float a, float b){
    double res;
    res=a+b;
    return res;
}

double resta(float a, float b){
    double res;
    res=a-b;
    return res;
}

double multi(float a, float b){
    double res;
    res=a*b;
    return res;
}

double division(float a, float b){
    double res;
    res=a/b;
    return res;
}

void imprimir(float n1, float n2){
    double resS,resR,resM,resD;
    resS=suma(n1,n2);
    resR=resta(n1,n2);
    resM=multi(n1,n2);
    resD=division(n1,n2);
    printf("Numero 1: %.2f\nNumero 2: %.2f\nSuma= %.2lf\nResta= %.2lf\nMultiplicacion= %.2lf\nDivision= %.2lf",n1,n2,resS,resR,resM,resD);
}
