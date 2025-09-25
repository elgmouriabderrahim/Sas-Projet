#include <stdio.h>

main(){
	int n,i,j,tompo;
	printf("entrer le nombrer des elements du tableux:");
	scanf("%d", &n);
	int tab[n];
	for(i=0 ; i<n ; i++){
		printf("case %d = ", i+1);
		scanf("%d", &tab[i]);
	}
	j=n-1;
	for(i=0 ; i<=n/2 ; i++){
				tompo = tab[j];
				tab[j]= tab[i];
				tab[i]= tompo;
				j--;
	}
	printf("tableux inverses:\n");
	for(i=0 ; i<n ; i++){
		printf("%d\t", tab[i]);
	}
	
}
