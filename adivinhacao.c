#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("\n\n");    
    printf("  _   |~  _   Bem vindo        \n");
    printf(" [_]--'--[_]   ao nosso        \n");
    printf(" |'|''`'' |'|     Jogo          \n");
    printf(" | | /^\\ | |      de          \n");
    printf(" |_|_|I|_|_|  adivinhacao  \n\n\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;
    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil \n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;
    switch (nivel) {
    case 1:
        numerodetentativas = 20;
        break;
    case 2:
        numerodetentativas = 15;
        break;
    default:
        numerodetentativas = 6;
        break;
    }    
    for (int i = 1; i <= numerodetentativas; i++) {
     
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu %do. chute? ", tentativas);
        scanf("%d", &chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos\n");
            continue;
        }

        printf("Seu %do. chute foi %d\n", tentativas, chute);

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou) {
            break;
        } else if(maior) {
            printf("Seu chute foi maior do que o número secreto!\n");
        } else {
            printf("Seu chute foi menor do que o número secreto!\n");
        }

        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }

    printf("Fim de jogo!\n");

    if (acertou)
    {   
        printf("\n\n");
        printf("                        *****************                         \n");
        printf("                  ******               ******                     \n");
        printf("              ****                           ****                 \n");
        printf("            ****                                 ***              \n");
        printf("          ***                                       ***           \n");
        printf("        **           ***               ***           **           \n");
        printf("      **           *******           *******          ***         \n");
        printf("      **            *******           *******            **       \n");
        printf("    **             *******           *******             **       \n");
        printf("    **               ***               ***               **       \n");
        printf("    **                                                     **     \n");
        printf("    **       *                                     *       **     \n");
        printf("    **       *                                     *       **     \n");
        printf("    **      **                                     **      **     \n");
        printf("    **   ****                                     ****   **       \n");
        printf("    **      **                                   **      **       \n");
        printf("      **       ***                             ***       **       \n");
        printf("      ***       ****                       ****       ***         \n");
        printf("        **         ******             ******         **           \n");
        printf("          ***            ***************            ***           \n");
        printf("            ****                                 ****             \n");
        printf("              ****                           ****                 \n");
        printf("                  ******               ******                     \n");
        printf("                        *****************                         \n");
        printf("\n\n");  
        printf("Você ganhou!\n");
        printf("Você acertou em %d tentaivas!\n ", tentativas);
        printf("Você fez %.2f pontos", pontos);
    } else
    { 
        printf("\n\n");
        printf("       _______         \n");
        printf("     _/       \\_      \n");
        printf("    / |       | \\     \n");
        printf("   /  |__   __|  \\    \n");
        printf("  |__/((o| |o))\\__|   \n");
        printf("  |      | |      |    \n");
        printf("  |\\     |_|     /|   \n");
        printf("  | \\           / |   \n");
        printf("   \\| /  ___  \\ |/   \n");
        printf("    \\ | / _ \\ | /    \n");
        printf("     \\_________/      \n");
        printf("      _|_____|_        \n");
        printf(" ____|_________|____   \n");
        printf("/                   \\ \n");
        printf("\n\n");
        printf("Você perdeu! Tente de novo!\n" );
    }
    
    printf("Obrigado por jogar!\n");

}