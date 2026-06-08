#ifndef JOGO_H
#define JOGO_H

typedef struct
{
    char nome[50];
    float distancia;
    int energia;
    double tempoFinal;
} Jogador;

void iniciarCorrida(Jogador *jogador);

#endif