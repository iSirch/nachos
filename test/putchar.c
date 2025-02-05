#include "syscall.h"
void print(char c, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        PutChar(c + i); // affiche bien abcd
    }
    PutChar('\n'); 
}
int
main()
{
    print('a',4);
    //Halt(); // marche sans le Halt grâce au exit mit en place
}

/*
    Pour utiliser PutChar il faut mettre un char en paramètre a PutChar().
    depuis userprog ./nachos -x ../test/putchar
*/