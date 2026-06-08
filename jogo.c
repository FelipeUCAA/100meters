#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#include "jogo.h"
#include "recordes.h"
#include "curiosidades.h"

#define DISTANCIA_TOTAL 100
#define TAM_PISTA 50

static void desenharPista(float distancia, int energia)
{
    system("cls");

    int pos = (int)((distancia / DISTANCIA_TOTAL) * TAM_PISTA);

    printf("=========================================\n");
    printf("           SPRINT 100M\n");
    printf("=========================================\n\n");

    printf("[");

    for(int i = 0; i < TAM_PISTA; i++)
    {
        if(i == pos)
            printf("R");
        else
            printf("=");
    }

    printf("] F\n\n");

    printf("Distancia: %.1f / 100m\n", distancia);
    printf("Energia: %d%%\n", energia);

    mostrarCuriosidade(distancia);
}

void iniciarCorrida(Jogador *jogador)
{
    jogador->distancia = 0;
    jogador->energia = 95;

    printf("\nPreparar...\n");
    Sleep(1000);

    printf("Apontar...\n");
    Sleep(1000);

    printf("JA!\n");
    Sleep(500);

    clock_t inicio = clock();

    while(jogador->distancia < DISTANCIA_TOTAL)
    {
        desenharPista(
            jogador->distancia,
            jogador->energia
        );

        int tecla = getch();

        if(tecla == ' ')
        {
            float passo;

            if(jogador->energia > 70)
                passo = 2.5;
            else if(jogador->energia > 40)
                passo = 2.0;
            else
                passo = 1.5;

            jogador->distancia += passo;

            if(jogador->energia > 0)
                jogador->energia--;
        }
    }

    clock_t fim = clock();

    jogador->tempoFinal =
        (double)(fim - inicio) / CLOCKS_PER_SEC;

    salvarRecorde(
        jogador->nome,
        jogador->tempoFinal
    );
}