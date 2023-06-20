#include <stdio.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <stdlib.h>

int read(int argc, char *argv[])
{
    FILE* fichier = NULL;
    int caractereActuel = 0;
 
    fichier = fopen("test.txt", "r");
 
    if (fichier != NULL)
    {
        // Boucle de lecture des caractères un à un
        while (caractereActuel != EOF)
        {
            caractereActuel = fgetc(fichier); // On lit le caractère
            printf("%c", caractereActuel); // On l'affiche
        }  // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)
 
        fclose(fichier);
    }
    return 0;
}

int main()
{
    struct winsize win;
    ioctl( 0, TIOCSWINSZ, (char *) &win );
    int lignes = win.ws_row;
    int colonnes = win.ws_col;
    printf( "lignes: %d\ncolonnes: %d\n", lignes, colonnes );
    return 1;
}
