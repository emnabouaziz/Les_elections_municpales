#include <stdio.h>
#include <string.h>
#include "listelectoral.h"

int main ()
{
    listelectoral p1={},p2= {},p3;
    int x=ajoutedecondidat("Listeselectorales.txt", p1);
    x=modifierlaliste("Listeselectorales.txt",1,p2 );
    if(x==1)
        printf("\nModification de point avec succés");
    else printf("\nechec Modification");
    x=supprimerlaliste("Listeselectorales.txt",1 );
    if(x==1)
        printf("\nSuppression de point avec succés");
    else printf("\nechec Suppression");
    p3=chercher("Listeselectorales.txt",p3 );
    if(p3.id==-1)
        printf("introuvable");
    return 0;
}
