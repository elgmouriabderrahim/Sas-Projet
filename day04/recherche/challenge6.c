#include <stdio.h>

int rechercheD(int tab[],int  nb){
	int i,j;
	for(i = 0 ; i< nb-1 ; i++){
		for(j=i+1 ; j< nb ; j++){
			if(tab[i] == tab[j])
				return 1;
		}
	}
	return 0;
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
	if(rechercheD(tab, nb))
		printf("il y des doublants\n");
 	else
		printf("il y pas des doublants\n");
	return 0;
}
