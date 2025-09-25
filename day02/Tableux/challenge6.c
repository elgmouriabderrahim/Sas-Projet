#include <stdio.h>

main(){
	int n,i,fac;
	printf("entrer le nombrer des elements du tableux:");
	scanf("%d", &n);
	int tab[n];
	for(i=0 ; i<n ; i++){
		printf("case %d = ", i+1);
		scanf("%d", &tab[i]);
	}
	printf("entrer le factuer de multiplication:");
	scanf("%d", &fac);
	for(i=0 ; i<n ; i++){
		tab[i] *= fac;
	}
	for(i=0 ; i<n ; i++){
		printf("%d\t",tab[i]);
	}
	
}
