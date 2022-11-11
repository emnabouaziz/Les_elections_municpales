#ifndef PROJET_C_H_INCLUDED
#define PROJET_C_H_INCLUDED
typedef struct utilisateur
{
	char Nom[20];
	char Prenom[20];
	int jour;
	int mois;
	int annee;
	char sexe[10];
	long CIN;
	long id;
	char Role[20];
        int vote ;	
	int Numero_de_bureau_de_vote;
	char mot_de_passe[8];
        char mail[50];
} utilisateur;

int ajouter(utilisateur p , char filename []);
int modifier(int id, utilisateur nouv, char * filename);
int supprimer(int id, char * filename);
utilisateur chercher(long id, char * filename);

 
#endif

