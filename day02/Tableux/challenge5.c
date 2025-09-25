#include <stdio.h>

main(){
	int n,i;
	printf("entrer le nombrer des elements du tableux:");
	scanf("%d", &n);
	int tab[n],min;
	for(i=0 ; i<n ; i++){
		printf("case %d = ", i+1);
		scanf("%d", &tab[i]);
	}
	min = tab[0];
	for(i=0 ; i<n ; i++){
		if(min>tab[i])
			min = tab[i];
	}
	if(n == 0)
	printf(" le tableaux est vide");
	else
		printf("la min est : %d",min);
	
}
