#include "ut.h"
#include <stdio.h>
#include <string.h>


/*
int ajouter(char * filename, utilisateur u )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
      fprintf(f,"%s %s %d %d %d %d %d %s %s %s %s %d %d \n",u.Nom,u.Prenom,u.date.jour,u.date.moins,u.date.annee,u.cin,u.idf,u.role,u.sexe,u.login,u.mdp,u.vote,u.bv);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int idf, utilisateur nouv )
{
    int tr=0;
    utilisateur u ;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %d %d %d %d %d %s %s %s %s %d %d \n",u.Nom,u.Prenom,&u.date.jour,&u.date.moins,&u.date.annee,&u.cin,&u.idf,u.role,u.sexe,u.login,u.mdp,&u.vote,&u.bv)!=EOF)
        {
            if(u.idf== idf)
            {
                fprintf(f2,"%s %s %d %d %d %d %d %s %s %s %s %d %d  \n",nouv.Nom,nouv.Prenom,nouv.date.jour,nouv.date.moins,nouv.date.annee,nouv.cin,nouv.idf,nouv.role,nouv.sexe,nouv.login,nouv.mdp,nouv.vote,nouv.bv);
                tr=1;
            }
            else
                fprintf(f2,"%s %s %d %d %d %d %d %s %s %s %s %d %d  \n",u.Nom,u.Prenom,u.date.jour,u.date.moins,u.date.annee,u.cin,u.idf,u.role,u.sexe,u.login,u.mdp,u.vote,u.bv);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, int idf)
{
    int tr=0;
    utilisateur u;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %d %d %d %d %d %s %s %s %s %d %d ",u.Nom,u.Prenom,&u.date.jour,&u.date.moins,&u.date.annee,&u.cin,&u.idf,u.role,u.sexe,u.login,u.mdp,&u.vote,&u.bv)!=EOF)
        {
            if(u.idf== idf)
                tr=1;
            else
                fprintf(f2,"%s %s %d %d %d %d %d %s %s %s %s %d %d \n",u.Nom,u.Prenom,u.date.jour,u.date.moins,u.date.annee,u.cin,u.idf,u.role,u.sexe,u.login,u.mdp,u.vote,u.bv);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
utilisateur chercher(char * filename, int idf)
{
    utilisateur u;
    int tr=0;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&&fscanf(f,"%s %s %d %d %d %d %d %s %s %d %d  ",u.Nom,u.Prenom,&u.date.jour,&u.date.moins,&u.date.annee,&u.cin,&u.idf,u.role,u.sexe,&u.vote,&u.bv)!=EOF)
        {
            if(u.idf== idf)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        u.idf=-1;
    return u;
}*/
float agemoyen(char * filename)
{ 
	utilisateur u;
	int age;
	int nb_age=0;
	int nb_elec=0;
	float moy=0;
	FILE *f=fopen("utilisateur.txt", "r");
	if(f!=NULL )
	{
		while(fscanf(f,"%s %s %d %d %d %d %d %s %s %d %d \n",u.Nom,u.Prenom,&u.date.jour,&u.date.moins,&u.date.annee,&u.cin,&u.idf,u.role,u.sexe,&u.vote,&u.bv)!=EOF)
		{       age=2023-u.date.annee;
			if ((strcmp("electeur",u.role)==0) && (u.vote!=-1) )
               		{
                     		nb_elec++ ;
                  		nb_age=nb_age+age ;
				moy=(nb_age/(nb_elec*1.0)) ;	
			}		
		}
	
	}
fclose(f);
return moy;
}


