#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

	srand(time(0));
	double valeur_demandee = (double)(rand()% 1000 + 1);
	printf("le montant a payer est : Rs%.2f\n", valeur_demandee);

	double valeur_donnee;

	do{
		printf("Enter la valeur a payer: Rs ");
		scanf("%lf", &valeur_donnee);

		if(valeur_demandee > valeur_donnee){
			printf("Erreur! vous avez entrer un montant inferieur\n");
		}
	}while(valeur_demandee>valeur_donnee);

	printf("Vous avez paye un montant de Rs : %.2f\n", valeur_donnee);

}
