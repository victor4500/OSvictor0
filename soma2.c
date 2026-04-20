#include <stdio.h>

int soma(int a, int b) {
    return a + b;

}

int main(){

    printf("digite o primiero numero para somar:\n ");

    int a;

    scanf("%d", &a);

    printf("digite o segundo numero para somar:\n ");

    int b;

    scanf("%d", &b);

    printf( "o resultado: %d\n", soma(a, b));
}