#include "syscall.h"
int
main()
{   
    PutInt(1); // Affiche 1  marche avec un entier 
    PutChar('\n');
    PutInt(-1); // Affiche -1   marche avec un entier négatif
    PutChar('\n');
    PutInt(9999999); // Affiche 9999999 marche avec un grand entier
    PutChar('\n');
    PutInt(-999999); // Affiche 99999 marche avec un grand entier négatif
    PutChar('\n');
    PutInt(12345678901234567890); // Affiche Entier trop grand
}
/*
    Pour utiliser PutInt il faut mettre un entier en paramètre a PutInt().
    depuis userprog ./nachos -x ../test/putint
*/