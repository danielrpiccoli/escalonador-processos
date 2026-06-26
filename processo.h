#ifndef PROCESSO_H
#define PROCESSO_H

#include "pcb.h"

// cria e preenche um pcb com valores parcialmente aleatórios
PCB* criar_processo(int pid, int ppid, int instante_chegada);

// nome legível do tipo de I/O para os logs
const char* nome_io(TipoIO tipo);

#endif
