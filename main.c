
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int continuerPartie=1 ;
int niveau=0 ;
int MAX=0,MIN = 1;
printf(“\033[0;31m”);
printf("choisir le niveau de difficulte : \n") ;
printf("1 = entre 1 et 100.\n2 = entre 1 et 1000.\n3 = entre 1 et 10000.\n") ;
printf("Quel niveau choisissez vous ? tapez son numero : ");
scanf("%d",&niveau);
switch(niveau)
{
case 1:
    MAX=100;
    break;
case 2 :
    MAX=1000 ;
    break;
case 3 :
    MAX =10000 ;
    break;
default :
    printf("\nle numero que vous avez saisie est invalide\n") ;
    continuerPartie=0 ;
    break;
}

int nombreMystere ;
int nbr,nbrcoup ;
while(continuerPartie)
{
srand(time(NULL));
nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
nbr=0;
nbrcoup=1 ;
do
{
printf("Quel est le nombre ? ");
scanf("%d",&nbr) ;
if(nbr<nombreMystere){printf("c'est plus!\n ");nbrcoup++;}
else if (nbr>nombreMystere){printf("c'est moins!\n");nbrcoup++;}
else {printf("Bravo,vous avez trouve le nombre mystere en %d coups \n",nbrcoup);}

}while(nbr!=nombreMystere) ;
printf("\n si vous voulez rejouer tapez 1 sinon 0 pour quitter :\n ") ;
scanf("%d",&continuerPartie) ;
}
return 0 ;
}
