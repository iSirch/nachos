#include "syscall.h"
void F(void* arg){
    volatile int i; 
    for(i=0; i<2; i++){
        PutChar('a');
    }
}

int main()
{
    int i;
    for (i=0; i<5; i++){
        ThreadCreate(F,(void *) 8);
    }
    PutChar('\n');
    for (i=0; i<50; i++){
        ThreadCreate(F,(void *) 8);
    }
}
/*
    ./nachos -rs 1234 -x ../test/makethreads

    Comportement attendu du test:
    aaaa... (10 caracteres)
    \n (1 caractere)
    aaaaa... (100 caracteres)
    Console I/O: reads 0, writes 111 ()
*/