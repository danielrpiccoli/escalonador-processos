#include <stdio.h>
#include "fila.h"

int main() {
    Fila f;
    fila_init(&f);

    PCB a = {.pid = 1, .prioridade = 0};
    PCB b = {.pid = 2, .prioridade = 0};

    enfileirar(&f, &a);
    enfileirar(&f, &b);

    PCB* x = desenfileirar(&f);
    printf("Saiu o PID: %d\n", x->pid);  // espera 1

    x = desenfileirar(&f);
    printf("Saiu o PID: %d\n", x->pid);  // espera 2

    return 0;
}