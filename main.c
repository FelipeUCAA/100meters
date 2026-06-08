#include <stdio.h>
#include <conio.h>

#include "jogo.h"
#include "recordes.h"

int main()
{
    int opcao;

    do
    {
        printf("=================================\n");
        printf("          SPRINT 100M\n");
        printf("=================================\n");
        printf("1 - Nova Corrida\n");
        printf("2 - Recordes\n");
        printf("3 - Sair\n");
        printf("\nOpcao: ");

        scanf("%d", &opcao);

        if(opcao == 1)
        {
            Jogador jogador;

            printf("\nNome do atleta: ");
            scanf("%s", jogador.nome);

            iniciarCorrida(&jogador);

            printf("\n=================================\n");
            printf("CORRIDA FINALIZADA\n");
            printf("=================================\n");

            printf(
                "\nTempo: %.2lf segundos\n",
                jogador.tempoFinal
            );

            printf("\nPressione qualquer tecla...");
            getch();
        }

        if(opcao == 2)
        {
            mostrarRecordes();

            printf("\nPressione qualquer tecla...");
            getch();
        }

    } while(opcao != 3);

    return 0;
}