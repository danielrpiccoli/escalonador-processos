#ifndef CONFIG_H
#define CONFIG_H

/* ===== Premissas do simulador (ajuste aqui e cite no relatorio) ===== */

#define MAX_PROCESSOS   10   /* limite maximo de processos criados        */
#define QUANTUM         3    /* fatia de tempo, em ticks                   */

/* Faixa do tempo de servico (CPU) de cada processo */
#define SERVICO_MIN     5
#define SERVICO_MAX     20

/* Duracao de cada tipo de I/O, em ticks */
#define DURACAO_DISCO       4
#define DURACAO_FITA        3
#define DURACAO_IMPRESSORA  5

/* Probabilidade (%) de um processo solicitar I/O */
#define CHANCE_IO       60

#endif
