#include <stdlib.h>
#include <stdio.h>
#include "grille.h"
#include "grille.c"

int main()
{
    printf("Demineur\n");
//test branche
    int nbCols;
    int nbRows;
    int nbMines;

    printf("nb lignes ? \n");
    scanf("%d",&nbRows);

    printf("nb colonnes ? \n");
    scanf("%d",&nbCols);

        printf("nb mines ? \n");
    scanf("%d",&nbMines);

    if(nbRows >= 0 && nbRows < 32)
    {
        if(nbCols >= 0 && nbCols < 32)
        {
            Liste *maGrille = initialisation(nbRows, nbCols);
            int r;
            int c;
            for(r = 0; r < nbRows; r++)
            {      
                for(c = 0; c < nbCols; c++)
                {
                    insertion(maGrille, r, c, 'n',isMined(nbCols));
                    calculAdjacences(maGrille, nbRows, nbCols);

                  

                }                
            }
            afficherGrille(maGrille);
        }
    }
    else
    {
        printf("Erreur dans le nombre de lignes et de colonnes, au revoir !");
        exit(0);
    }
    
    
    return 0;

}