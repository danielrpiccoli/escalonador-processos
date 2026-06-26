#ifndef PCB_H
#define PCB_H

/* Estados possiveis de um processo */
typedef enum {
    PRONTO,
    EXECUTANDO,
    BLOQUEADO,
    TERMINADO
} Status;

/* Tipos de I/O */
typedef enum {
    SEM_IO,
    DISCO,
    FITA,
    IMPRESSORA
} TipoIO;

typedef struct {
    int pid;
    int ppid;
    int prioridade;        /* 0 = alta, 1 = baixa                      */
    Status status;

    int tempo_servico;     /* total de CPU que o processo precisa      */
    int tempo_executado;   /* quanto de CPU ja consumiu                */

    int instante_chegada;  /* tick em que o processo entra no sistema  */
    int chegou;            /* 0 = ainda nao entrou, 1 = ja criado      */

    TipoIO tipo_io;        /* tipo de I/O que ele vai solicitar        */
    int instante_io;       /* apos quantos ticks de CPU ele pede I/O   */
    int tempo_restante_io; /* contador regressivo durante o bloqueio   */
} PCB;

#endif
