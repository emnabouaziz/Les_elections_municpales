#ifndef LISTELECTORAL_H_INCLUDED
#define LISTELECTORAL_H_INCLUDED
#include <stdio.h>
typedef struct
{
    int jour;
    int mois;
    int annee;
}Date;
typedef struct
{
    int num;
    int id;
    char nom [20];
    char prenom [20];
    Date date;
    char Nationnalite;
    char Appartenance;
    char sexe;
    int tete;
    int nbrvote;
} Listelectoral;

int ajoutedecondidat(char *, Listelectoral );
int modifierlaliste( char *, int, Listelectoral );
int supprimerlaliste(char *, int, Listelectoral );
int voter (char *, Listelectoral );
listelectoral chercher(char *, int);

#endif // LISTELECTORAL_H_INCLUDED
