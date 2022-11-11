#include <stdio.h>
#include "liste_utilisateur.h"


int ajouter(utilisateur p , char filename [])
{
    FILE * f=fopen("utilisateur.txt", "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %d %d %d %s %d %d %s %d %s %s %d \n",p.Nom,p.Prenom,p.jour,p.mois,p.annee,p.sexe,p.CIN,p.id,p.Role,p.Numero_de_bureau_de_vote,p.mail,p.mot_de_passe,p.vote);
        fclose(f);
        return 1;
    }
    else return 0;
}
utilisateur p;
 
int modifier(int id, utilisateur nouv, char * filename)
{
    utilisateur p;
    FILE * f=fopen("utilisateur.txt", "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %d %d %d %s %d %d %s %d %s %s \n",p.Prenom,p.Nom,&p.jour,&p.mois,&p.annee,p.sexe,&p.CIN,&p.id,p.Role,&p.Numero_de_bureau_de_vote,p.mail,p.mot_de_passe)!=EOF)
{
if(p.id!=id)
        fprintf(f2,"%s %s %d %d %d %s %d %d %s %d %s %s %d \n ",p.Prenom,p.Nom,p.jour,p.mois,p.annee,p.sexe,p.CIN,p.id,p.Role,p.Numero_de_bureau_de_vote,p.mail,p.mot_de_passe,p.vote);
else

  fprintf(f2,"%s %s %d %d %d %s %d %d %s %d %s %s %d \n ",nouv.Prenom,nouv.Nom,nouv.jour,nouv.mois,nouv.annee,nouv.sexe,nouv.CIN,nouv.id,nouv.Role,nouv.Numero_de_bureau_de_vote,nouv.mail,nouv.mot_de_passe,nouv.vote);

   }
        fclose(f);
        fclose(f2);
remove("utilisateur.txt");
rename("aux.txt", "utilisateur.txt");
        return 1;
    }
  
}

int supprimer(int id, char * filename)
{
    utilisateur p;
    FILE * f=fopen("utilisateur.txt", "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %d %d %d %s %d %d %s %d %s %s %d \n ",p.Prenom,p.Nom,&p.jour,&p.mois,&p.annee,p.sexe,&p.CIN,&p.id,p.Role,&p.Numero_de_bureau_de_vote,p.mail,p.mot_de_passe,p.vote)!=EOF)
{
if(p.id!=id)
        fprintf(f2,"%s %s %d %d %d %s %d %d %s %d %s %s %d \n ",p.Prenom,p.Nom,p.jour,p.mois,p.annee,p.sexe,p.CIN,p.id,p.Role,p.Numero_de_bureau_de_vote,p.mail,p.mot_de_passe,p.vote);

}
        fclose(f);
        fclose(f2);
remove("utilisateur.txt");
rename("aux.txt", "utilisateur.txt");
        return 1;
    }
}
utilisateur chercher(long id, char * filename)
{
utilisateur p;
 int tr;
    FILE * f=fopen("utilisateur.txt", "r");
tr=0;
 if(f!=NULL )
    {
while(tr==0 && fscanf(f,"%s %s %d %d %d %s %d %d %s %d %s %s %d \n ",p.Prenom,p.Nom,&p.jour,&p.mois,&p.annee,p.sexe,&p.CIN,&p.id,p.Role,&p.Numero_de_bureau_de_vote,p.mail,p.mot_de_passe,p.vote)!=EOF)
{if(p.id==id)
tr=1;
}
}
fclose(f);
if(tr==0)
p.id=-1;
return p;

}
