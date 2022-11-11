#include <stdio.h>
#include <string.h>
#include "observateur.h"

int main()
{
	observateur o1={"emna","bouaziz",01,01,2002,"Femme","14507265",123456,"tunisienne", 5,"emna123","emna.bouaziz@esprit.tn"}, o2={"mohamed","bouaziz",27,6,2000,"homme","14578963",987654,"tunisien",2,"m1234az5","mohamed.bouaziz@esprit.tn"} ;
 observateur o3;
int x;
	x=ajouter(o2,"observateur.txt");
	if (x==1)
	    printf("ajout d'un observateur avec succes\n");
	else 
	    printf("echec de l'ajout\n"); 


	x=modifier(123456,o2,"observateur.txt");
	if (x==1)
	    printf("modification d'un observateur avec succees\n");
	else 
	    printf("echec de modifier\n");


	x=supprimer(123456,"observateur.txt");
	if (x==1)
	    printf("suppression d'un observateur avec succees\n");
	else 
	    printf("echec de suppression\n");

observateur p ;
	p=chercher(987654,"observateur.txt");
	if (o3.id==-1)
	    printf("echec de recherche \n");
	

	return 0; 
}

