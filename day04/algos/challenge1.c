#include <stdio.h>
void affiche(int tab[], int nb){
	int i;
	for(i=0 ; i<nb ; i++){
		printf("%d\t", tab[i]);
	}
	printf("\n");
}
void triabulles(int tab[], int nb){
	int i, j, temp;
	for(i=0 ; i<nb-1 ; i++){
		for(j=0 ; j<nb-1-i ; j++){
			if(tab[j] > tab[j+1]){
				temp = tab[j];
				tab[j]= tab[j+1];
				tab[j+1]= temp;
			}
		}
	}
}
int main(){
	int nb;
	printf("entrer le nombres des elements de tableau :");
	scanf("%d", &nb);
	int tab[nb], i;
	for(i=0 ; i<nb ; i++){
		printf("case %d :", i+1);
		scanf("%d", &tab[i]);
	}
	printf("l'affichage de taleax non trie\n");
	affiche(tab,nb);
	
	triabulles(tab,nb);
	printf("l'affichage de taleax apres le triage\n");
	affiche(tab,nb);
	
	return 0;
}
