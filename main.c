#include <stdio.h>
#include <stdlib.h>

void counting(double a, int N);
double power (double a, int N);

int main()
{
    int N;
    double a;

do{
    printf("\nEnter N(>=1):");
    scanf("%u", &N);
    printf("\nEnter a:");
    scanf("%lf",&a);
}while(N<1);
    system("cls");
    counting(a,N);
   getch();
}

void counting(double a,int N){

double S,answear;
double i;

for (i=1;i<=N;i++){;
    answear=+i/2;
}
S=power(a,N-1)/3+answear;
printf("\nN=%u\na=%.5f\nS=%.5f",N,a,S);
}

double power(double a, int N) {
    double result = 1;
    for (double i = 0; i < N; i++) {
        result *= a;
    }
    return result;
}
