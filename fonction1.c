#include <string.h>
#include <stdio.h>
#include "observateur.h"

int ajouter(observateur p , char * filename)
{
    FILE * f=fopen("observateur.txt", "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %d %d %d %s %s %s %d %s %d %s %s \n",p.Nom,p.Prenom,p.jour,p.mois,p.annee,p.sexe,p.Nationnalite,p.CP,p.id,p.Numero_de_bureau_de_vote,p.mail,p.mot_de_passe);
        fclose(f);
        return 1;
    }
    else return 0;
}
observateur p;
 
int modifier(int id, observateur nouv, char * filename)
{
    observateur p;
    FILE * f=fopen("observateur.txt", "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %d %d %d %s %s %s %d %d %s %s \n",p.Prenom,p.Nom,&p.jour,&p.mois,&p.annee,p.sexe,p.Nationnalite,p.CP,&p.id,&p.Numero_de_bureau_de_vote,p.mail,p.mot_de_passe)!=EOF)
{
if(p.id!=id)
        fprintf(f2,"%s %s %d %d %d %s %s %s %d %d %s %s \n ",p.Prenom,p.Nom,p.jour,p.mois,p.annee,p.sexe,p.Nationnalite,p.CP,p.id,p.Numero_de_bureau_de_vote,p.mail,p.mot_de_passe);
else

  fprintf(f2,"%s %s %d %d %d %s %s %s %d %d %s %s\n ",nouv.Prenom,nouv.Nom,nouv.jour,nouv.mois,nouv.annee,nouv.sexe,nouv.Nationnalite,nouv.CP,nouv.id,nouv.Numero_de_bureau_de_vote,nouv.mail,nouv.mot_de_passe);

   }
        fclose(f);
        fclose(f2);
remove("observateur.txt");
rename("aux.txt", "observateur.txt");
        return 1;
    }
  
}

int supprimer(int id, char * filename)
{
    observateur p;
    FILE * f=fopen("observateur.txt", "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %d %d %d %s %s %s %d %d %s %s \n ",p.Prenom,p.Nom,&p.jour,&p.mois,&p.annee,p.sexe,p.Nationnalite,&p.CP,&p.id,&p.Numero_de_bureau_de_vote,p.mail,p.mot_de_passe)!=EOF)
{
if(p.id!=id)
        fprintf(f2,"%s %s %d %d %d %s %s %s %d %d %s %s\n ",p.Prenom,p.Nom,p.jour,p.mois,p.annee,p.sexe,p.Nationnalite,p.CP,p.id,p.Numero_de_bureau_de_vote,p.mail,p.mot_de_passe);

}
        fclose(f);
        fclose(f2);
remove("observateur.txt");
rename("aux.txt", "observateur.txt");
        return 1;
    }
}
observateur chercher(long id, char * filename)
{
observateur p;
 int tr;
    FILE * f=fopen("observateur.txt", "r");
tr=0;
 if(f!=NULL )
    {
while(tr==0 && fscanf(f,"%s %s %d %d %d %s %s %s %d %d %s %s\n ",p.Nom,p.Prenom,&p.jour,&p.mois,&p.annee,p.sexe,p.Nationnalite,p.CP,&p.id,&p.Numero_de_bureau_de_vote,p.mail,p.mot_de_passe)!=EOF)
{if(p.id==id)
tr=1;
}
}
fclose(f);
if(tr==0)
p.id=-1;
return p;
}

