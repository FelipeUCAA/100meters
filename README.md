# Sprint 100M - Jogo Educativo de Corrida

## Equipe

Felipe Ulisses
Gabriel Dias
Jailson Souza

---

## Descrição

Sprint 100M é um jogo educativo desenvolvido em linguagem C para a disciplina de Programação Imperativa e Funcional (PIF) e Lógica.

O objetivo do jogador é completar uma corrida de 100 metros pressionando a tecla espaço repetidamente para avançar até a linha de chegada.

Durante a corrida, o jogador recebe curiosidades e informações reais sobre atletismo, desempenho esportivo e corridas de velocidade, transformando a experiência em uma atividade educativa e interativa.

---

## Objetivos Educacionais

O jogo busca ensinar conceitos relacionados à corrida e ao atletismo, tais como:

* Recordes mundiais dos 100m rasos.
* Frequência cardíaca de atletas profissionais.
* Consumo calórico durante corridas.
* Importância do VO₂ Máximo para o desempenho esportivo.
* Curiosidades sobre treinamento e competições.

As informações são apresentadas durante a progressão da corrida, integrando aprendizado e entretenimento.

---

## Funcionalidades

* Sistema de corrida baseado em pressionar a tecla espaço.
* Exibição de progresso da corrida.
* Curiosidades educativas durante a partida.
* Sistema de recordes.
* Armazenamento de melhores tempos em arquivo.
* Estrutura modular utilizando múltiplos arquivos `.c` e `.h`.

---

## Estrutura do Projeto

```text
100meters/
├── main.c
├── jogo.c
├── jogo.h
├── curiosidades.c
├── curiosidades.h
├── recordes.c
├── recordes.h
├── recordes.txt
└── README.md
```

---

## Conceitos de Programação Utilizados

### Programação Imperativa

* Variáveis
* Estruturas condicionais
* Estruturas de repetição
* Funções
* Manipulação de arquivos
* Vetores

### Organização Modular

* Separação de responsabilidades em múltiplos módulos
* Arquivos de cabeçalho (`.h`)
* Encapsulamento de funcionalidades

### Lógica de Programação

* Controle de fluxo
* Controle de progresso da corrida
* Sistema de pontuação e recordes
* Gerenciamento de estados do jogo

---

## Como Compilar

### MSYS2 UCRT64

Abra o terminal **MSYS2 UCRT64** e execute:

```bash
gcc main.c jogo.c recordes.c curiosidades.c -o sprint.exe
```

---

## Como Executar

Após a compilação:

```bash
./sprint.exe
```

ou no Windows:

```bash
sprint.exe
```

---

## Exemplo de Jogabilidade

1. Inicie o jogo.
2. Pressione a tecla espaço repetidamente para correr.
3. Durante a corrida, serão exibidas curiosidades educativas.
4. Complete os 100 metros no menor tempo possível.
5. Tente bater seu recorde nas próximas partidas.

---

## Tecnologias Utilizadas

* Linguagem C
* GCC (GNU Compiler Collection)
* MSYS2 UCRT64

---
