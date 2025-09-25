#include <stdio.h>

main(){
	int n,i;
	printf("entrer le nombrer des elements du tableux:");
	scanf("%d", &n);
	int tab[n],somme = 0;
	for(i=0 ; i<n ; i++){
		printf("case %d = ", i+1);
		scanf("%d", &tab[i]);
	}
	for(i=0 ; i<n ; i++){
		somme += tab[i];
	}
	printf("la somme est : %d",somme);
}
