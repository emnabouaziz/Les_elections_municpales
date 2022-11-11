prog:observateur.o main1.o
      gcc observateur.o main1.o -o prog

main1.o:main1.c
   gcc -c main1.c
observateur.o:observateur.c
     gcc -c observateur.c
