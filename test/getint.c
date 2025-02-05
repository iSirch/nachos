#include "syscall.h"
int
main()
{
    int n = 6;
    GetInt(&n);
    PutInt(n);
    PutChar('\n');
}

/*
    depuis userprog ./nachos -x ../test/getint
    Pour utilsé GetInt() il faut passer l'adresse du int a modifié en paramètre,
    puis tapez la valeur voulu
    Une valeur extrement grande peut causer des problemes
*/