#include <stdio.h>

int main(int argc, char const *argv[]){
	int choix, n;
	printf("entrer 1 pour convertir annees en mois\n");
	printf("entrer 2 pour convertir annees en jours\n");
	printf("entrer 3 pour convertir annees en heurs\n");
	printf("entrer 4 pour convertir annees to minutes\n");
	printf("entrer 5 pour convertir annees to secondes\n");
	printf("votre choix?");
	scanf("%d",&choix);
	printf("le nombres d'annees:");
	scanf("%d", &n);
	switch(choix){
		case 1: printf("%d annee = %d mois", n, n*12);break;
		case 2: printf("%d annee = %d jours", n, n*365);break;
		case 3: printf("%d annee = %d heurs", n, n*365*24);break;
		case 4: printf("%d annee = %d minutes", n, n*365*24*60);break;
		case 5: printf("%d annee = %d secondes", n, n*365*24*60*60);break;
		default : printf("le nombre que vous avez entree est incorrect");
	}
}
