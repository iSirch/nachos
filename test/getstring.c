#include "syscall.h"

char ch[16];

int main()
{   
    GetString(ch,16); // Vous pouvez tapez 16 caractères ou moins et appuyer sur entrée, votre message va être répété
    PutString(ch); // si vous tapez + de 16 caractères les 16 premiers sont affichées
}

/*

    depuis userprog ./nachos -x ../test/getstring
    Pour utiliser GetString il faut mettre un tableau de char en premier paramètre a GetString().
    et la taille max du texte que l'on veut récupérer au clavier en 2deuxieme paramètre
    si l'utilisateur appuie sur entrée pour envoyé tous les caractère tapez sans arriver a la taille 
    indiqué
    Si l'utilisateur entre + de caractere que la taille donnée n, seul les n 1er carac sont renvoyé
*/