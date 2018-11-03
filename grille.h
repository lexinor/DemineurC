#ifndef GRILLE_H
#define GRILLE_H

typedef struct Element Element;
struct Element
{
    int row;
    int col;
    char statut; // o - open / f - flag / n - not open
    int mine; // 0 = no / 1 = yes
    int nbAdjacences; //nombre de mines aux 8 cases d'adjacences de la case concernée
    Element *suivant;
};

typedef struct Liste Liste;
struct Liste
{
    int nbRow;
    int nbCol;
    int nbCases;
    Element *premier;
};

int isMined(int nbCol);
Liste *initialisation(int _nbRow, int _nbCol);
void insertion(Liste *liste, int _row, int _col, char _statut, int _mine);
void suppression(Liste *liste);
void afficherGrille(Liste *liste);
int calculAdjacences(Liste *liste, int _row, int _col);
void insertionMines(Liste *liste, int nbmines);
#endif
