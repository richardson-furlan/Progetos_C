#include <stdio.h>

int main() {
    int numeroinserido;

    printf("Qual tabuada voce quer?\n");
    printf("Digite um numero inteiro!\n");
    scanf("%d", &numeroinserido);

    for (int i = 1; i <= 10; i++)
    {
        int resultado = numeroinserido * i;
        printf("%d * %d = %d \n",numeroinserido, i, resultado);
    }
    

}