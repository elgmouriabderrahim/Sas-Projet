#include <stdio.h>

int recherchebinaire(int tab[], int debut, int fin, int nb_r){
	int i ,m = (debut+fin)/2;
	while(debut<=fin){
	if(tab[m] == nb_r)
		return 1;
	else if(nb_r < tab[m])
		fin = m-1;
	else
		debut = m+1;
	m = (debut+fin)/2;
	}
	return 0;
}
int main(){
	int nb, nb_r;
	printf("entrer le nombres des elements de tableau :");
	scanf("%d", &nb);
	int tab[nb], i;
	for(i=0 ; i<nb ; i++){
		printf("case %d :", i+1);
		scanf("%d", &tab[i]);
	}
	printf("entrer l'element a rechercher :");
	scanf("%d", &nb_r);
	if(recherchebinaire(tab, 0, nb - 1, nb_r))
		printf("l'element est trouve.\n");
	else
		printf("l'element n'est pas trouve.\n");
	return 0;
}
