#ifndef CONFIG_H
#define CONFIG_H

#define MAX_PROCESSOS 10 // limite máximo de processos criados
#define QUANTIM 3 // fatia de tempo em ticks

// faixa de tempo de serviço de cpu para cada processo
#define SERVICO_MIN 5 
#define SERVICO_MAX 20

// durações de cada tipo de I/O em ticks
#define DURACAO_DISCO 4
#define DURACAO_FITA 3
#define DURACAO_IMPRESSORA 5

#define CHANCE_IO 60 // probabiliadde de um processo solicitar I/O

#endif