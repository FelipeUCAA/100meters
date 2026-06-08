#include <stdio.h>
#include "recordes.h"

void salvarRecorde(char nome[], double tempo)
{
    FILE *arquivo = fopen("recordes.txt", "a");

    if(arquivo != NULL)
    {
        fprintf(arquivo, "%s %.2lf\n", nome, tempo);
        fclose(arquivo);
    }
}

void mostrarRecordes()
{
    FILE *arquivo = fopen("recordes.txt", "r");

    if(arquivo == NULL)
    {
        printf("Nenhum recorde encontrado.\n");
        return;
    }

    char nome[50];
    double tempo;

    printf("\n===== RECORDES =====\n\n");

    while(fscanf(arquivo, "%s %lf", nome, &tempo) != EOF)
    {
        printf("%s - %.2lf segundos\n", nome, tempo);
    }

    fclose(arquivo);
}