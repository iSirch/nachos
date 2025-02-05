#include "syscall.h"

int main()
{
    char ch;
    ch = GetChar();
    PutChar(ch);
}

/*
    Pour utiliser GetChar() appeler la fonction et taper un caractere
    depuis userprog ./nachos -x ../test/getchar
*/