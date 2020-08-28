
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int continuerPartie=1 ;
int nombreMystere=1 ;
int nbr=0,nbrcoup=1 ;
srand(time(NULL));
while(continuerPartie)
{
int niveau=0 ;
int MAX=0,MIN = 1;
printf("\033[0m");
printf("\nchoose the level of difficulty : \n") ;
printf("1 = between 1 and 100.\n2 = between 1 and 1000.\n3 = between 1 and 10000.\n") ;
printf("which level you will choose ? type his number : ");
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
    printf("\033[0;31m") ;
    printf("\n***Error,you entered invalid number ***\n") ;
    printf("\033[0m");
    continuerPartie=0 ;
    break;
}
nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
nbr=0;
nbrcoup=1;
while(nbr!=nombreMystere && continuerPartie==1)
{
printf("What number is it ? ");
scanf("%d",&nbr) ;
if(nbr<nombreMystere){printf("\033[0;34m");printf("It's more than %d !\n ",nbr);printf("\033[0m");nbrcoup++;}
else if (nbr>nombreMystere){printf("\033[0;33m");printf("it's less than %d !\n",nbr);printf("\033[0m") ;nbrcoup++;}
else {printf("\033[0;32m");printf("***Well done, you have found the mystery number in %d attempts*** \n",nbrcoup);printf("\033[0m");}

}
if (continuerPartie==1){
printf("\n if you want to replay type 1 otherwise 0 to quit :\n ") ;
scanf("%d",&continuerPartie) ;}
}
return 0 ;
}
