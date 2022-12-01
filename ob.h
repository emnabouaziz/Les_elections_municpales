#ifndef OBSERVATEUR_H_INCLUDED
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
    char nationalite[20];
    char professione[20];
    char sexe[2];
    char login[30];
    char mdp[20];
    char appartenance[20];

  
} observateur;

int ajouter(char *l_ob, observateur);
int modifier( char *l_ob, int, observateur);
int supprimer(char *l_ob, int );
observateur chercher(char *l_ob, int);



#endif //UTILISATEUR_H_INCLUDED
