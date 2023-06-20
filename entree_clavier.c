#include <stdio.h>
#include <stdlib.h>
 
int main ( int argc, char* argv[] )
{
    char chaine[20] = ""; //initialise la chaine de charactere
 
    printf("Entrez une chaine:\n"); 
    fgets(chaine, sizeof(chaine), stdin); //la fonction qui recup les entrees en fonction de: une chaine de characteres, le nbr max d'entrees recuperables, l'endroit ou on recup les entrees.
    printf("Chaine: %s.\n", chaine); //affiche simplement la chaine de caracteres
 
    return 0;
}
