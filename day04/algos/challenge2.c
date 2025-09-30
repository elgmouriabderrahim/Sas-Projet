#include <stdio.h>
void affiche(int tab[], int nb){
	int i;
	for(i=0 ; i<nb ; i++){
		printf("%d\t", tab[i]);
	}
	printf("\n");
}
void triparinsertion(int tab[], int nb){
	int i, j, temp;
	for(i=1 ; i<nb ; i++){
		for(j=i-1 ; j>=0 ; j--){
			if(tab[j] > tab[j+1]){
				temp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1]=temp;
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
	
	triparinsertion(tab,nb);
	printf("l'affichage de taleax apres le triage\n");
	affiche(tab,nb);
	
	return 0;
}
