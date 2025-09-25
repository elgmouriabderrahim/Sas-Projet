#include <stdio.h>

main(){
	int n,i;
	printf("entrer le nombrer des elements du tableux:");
	scanf("%d", &n);
	int tab[n],max;
	for(i=0 ; i<n ; i++){
		printf("case %d = ", i+1);
		scanf("%d", &tab[i]);
	}
	max = tab[0];
	for(i=0 ; i<n ; i++){
		if(max<tab[i])
			max = tab[i];
	}
	if(n == 0)
	printf(" le tableaux est vide");
	else
	printf("la max est : %d",max);
}
