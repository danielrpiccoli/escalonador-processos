#ifndef ESCALONADOR_H
#define ESCALONADOR_H

#include "fila.h"

/* Agrupa todo o estado do sistema em uma struct */
typedef struct {
    Fila alta;            /* fila de prontos - alta prioridade        */
    Fila baixa;           /* fila de prontos - baixa prioridade       */
    Fila io_disco;        /* bloqueados aguardando disco              */
    Fila io_fita;         /* bloqueados aguardando fita               */
    Fila io_impressora;   /* bloqueados aguardando impressora         */

    int clock;            /* tick atual                               */
    int processos_terminados;
    int total_processos;
} Escalonador;

void escalonador_init(Escalonador* e, int total_processos);
void simular(Escalonador* e, PCB* todos[], int n);

#endif
