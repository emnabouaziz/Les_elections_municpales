#ifndef UTILISATEUR_H_INCLUDED
#define UTILISATEUR_H_INCLUDED


typedef struct 
{ 
    int  jour;
    int  moins;
    int  annee;		
}Date;
typedef struct
{
    char Nom [20];
    char Prenom [20];
    Date date;
    int cin;
    int idf;
    char role[10];
    char sexe[2];
    char login[30];
    char mdp[20];
    int bv;
    int vote;

  
} utilisateur;

int ajouter(char *, utilisateur );
int modifier( char *, int, utilisateur);
int supprimer(char *, int );
utilisateur chercher(char *, int);

float agemoyen(char * utilisateur);

#endif 

