#include <stdio.h>
void affiche(int tab[], int nb){
	int i;
	for(i=0 ; i<nb ; i++){
		printf("%d\t", tab[i]);
	}
	printf("\n");
}
void triparselection(int tab[], int nb){
	int i, j, min, temp;
	for(i=0 ; i<nb-1 ; i++){
		min = i;
		for(j=i+1 ; j<nb ; j++){
			if(tab[min] > tab[j]){
				min = j;
			}
		}
		if(min != i){
			temp = tab[i];
			tab[i] = tab[min];
			tab[min]=temp;
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
	
	triparselection(tab,nb);
	printf("l'affichage de taleax apres le triage\n");
	affiche(tab,nb);
	
	return 0;
}
