#include <stdio.h>
#include <string.h>
#include"ob.h"
int main()
{
    observateur o1= {"mimi","ch",31,05,10,12,1,"tunisien","journaliste","h","emna-2002@outlook.fr","ghsgew","politique"},o2= {"azzi","azizi",27,04,12,1,2,"algerien","interprète","f","emna-2002@outlook.fr","ghsgew","politique"},o3;
    int x=ajouter("observateur.txt", o1);
    if(x==1)
        printf("\najout d'observateur avec succés");
    else printf("\nechec ajout");
    x=modifier("observateur.txt",1,o2 );

    if(x==1)
        printf("\nModification d'observateur avec succés");
    else printf("\nechec Modification");
    x=supprimer("observateur.txt",2);
    if(x==1)
        printf("\nSuppression d'observateur avec succés");
    else printf("\nechec Suppression");
    o3=chercher("observateur.txt",3);
    if(o3.idf==-1)
        printf("\nintrouvable\n");
    else 
        printf("\ntrouvable\n");
    return 0;
    
}


