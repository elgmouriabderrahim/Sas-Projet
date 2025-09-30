#include <stdio.h>

int recherche(int tab[], int nb, int nbr){
	int i ;
	for(i=0 ; i<nb ; i++){
		if(tab[i] == nbr)
			return 1;
	}
	return 0;
}
int main(){
	int nb, nbr;
	printf("entrer le nombres des elements de tableau :");
	scanf("%d", &nb);
	int tab[nb], i;
	for(i=0 ; i<nb ; i++){
		printf("case %d :", i+1);
		scanf("%d", &tab[i]);
	}
	printf("entrer l'element a rechercher :");
	scanf("%d", &nbr);
	recherche(tab, nb, nbr);
	if(recherche(tab, nb, nbr))
		printf("l'element est trouve.\n");
	else
		printf("l'element n'est pas trouve.\n");
	return 0;
}
