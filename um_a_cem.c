#include <stdio.h>

int main(){

    int soma = 0;
    for (int n = 1; n <= 100; n++) {
    soma = soma + n;
    }

    printf("A soma eh %d", soma);
}