#include <stdio.h>
#include <string.h>
#include "liste_utilisateur.h"

int main()
{
	utilisateur u1={"emna","bouaziz",01,01,2002,"Femme",14654264,123456,"electeur",5,"eya12345","emna.bouaziz@esprit.tn"}, u2={"mohamed","bouaziz",27,6,2000,"homme",14578963,987654,"agent",2,"m1234az5","mohamed.bouaziz@esprit.tn"} ;

int x;
	x=ajouter(u2,"utilisateur.txt");
	if (x==1)
	    printf("ajout d'un utilisateur avec succes\n");
	else 
	    printf("echec de l'ajout\n"); 


	x=modifier(123456,u2,"utilisateur.txt");
	if (x==1)
	    printf("modification d'un utilisateur avec succees\n");
	else 
	    printf("echec de modifier\n");


	x=supprimer(123456,"utilisateur.txt");
	if (x==1)
	    printf("suppression d'un utilisateur avec succees\n");
	else 
	    printf("echec de suppression\n");

utilisateur p ;
	p=chercher("utilisateur.txt",987654);
	if (p.id==-1)
	    printf("chercher d'un utilisateur avec succees\n");
	else 
	    printf("echec de chercher\n");

	return 0; 
}

