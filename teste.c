#include <stdio.h>
#include <stdlib.h>
//Adicionei esse biblioteca
#include <locale.h>

int main(){

    //Adicionei essa linha
    setlocale(LC_ALL, "Portuguese_Brasil");

    printf("Bem vindo ao nosso jogode adivinhação");
}