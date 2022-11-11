#ifndef PROJET_C_H_INCLUDED
#define PROJET_C_H_INCLUDED
typedef struct observateur
{
	char Nom[20];
	char Prenom[20];
	int jour;
	int mois;
	int annee;
	char sexe[10];
	char CP [20];
	long int id;
        char Nationnalite[20] ;	
	int Numero_de_bureau_de_vote;
	char mot_de_passe[8];
        char mail[50];
} observateur ;

int ajouter(observateur p , char filename []);
int modifier(int id, observateur nouv, char * filename);
int supprimer(int id, char * filename );
observateur chercher(long id, char * filename);

 
#endif
