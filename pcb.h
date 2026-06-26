#ifndef PCB_H
#define PCB_H

// estados possíveis de um processso
typedef enum {
    PRONTO, 
    EXECUTADO,
    BLOQUADO,
    TERMINADO
} Status;

// tipos de I/O
typedef enum {
    SEM_IO,
    DISCO,
    FITA,
    IMPRESSORA
} TipoIO;

typedef struct {
    int pid;
    int ppid;
    int prioridade; // prioridade 0 = alta ou 1 = baixa
    Status status;

    int tempo_servico; // total de cpu que o processo precisa
    int tempo_executado; // quanto da cpu o processo já consumiu
    int instante_chegada; // tick em que o processo entra no sistema

    TipoIO tipo_io; // tipo de I/O que o processo vai solicitar
    int instante_io; // depois de quantos ticks de cpu o processo pede I/O
    int tempo_restante_io; // contador regressivo durante o bloqueio
} PCB;

#endif