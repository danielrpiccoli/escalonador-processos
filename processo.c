#include "processo.h"
#include "config.h"
#include <stdlib.h>

PCB* criar_processo(int pid, int ppid, int instante_chegada) {
	PCB* p = malloc(sizeof(PCB));
	
	p->pid = pid;
	p->ppid = ppid;
	p->prioridade = 0;
	p->status = PRONTO;
	
	p-> tempo_servico = SERVICO_MIN + rand() % (SERVICO_MAX - SERVICO_MIN + 1);
	p->tempo_executado = 0;
	
	p->instante_cheagda = instante_chegada;
	
	if (rand() % 100 < CHANCE_IO) {
		p->tipo_io = (TipoIO)(1 + rand() % 3);
		p->instante_io = 1 + rand() % p->tempo_servico;
	}
	else {
		p->tipo_io = SEM_IO;
		p->instante_io = -1;
	}
	
	p->tempo_restante_io = 0;
	return p;
}

const char* nome_io(TipoIo tipo) {
	switch (tipo) {
	case DISCO:
		return "Disco";
	case FITA:
		return "Fita";
	case IMPRESSORA:
		return "Impressora";
	default:
		return "Nenhum";
	}
}

