#include <stdio.h>

main(){
	int n1,n2,i,j;
	printf("entrer le nombrer des elements du premiere tableu:");
	scanf("%d", &n1);
	int tab1[n1];
	for(i=0 ; i<n1 ; i++){
		printf("case %d = ", i+1);
		scanf("%d", &tab1[i]);
	}
	printf("entrer le nombrer des elements du deuxieme tableu:");
	scanf("%d", &n2);
	int tab2[n2];
	for(i=0 ; i<n2 ; i++){
		printf("case %d = ", i+1);
		scanf("%d", &tab2[i]);
	}
	int tabf[n1+n2];
	for(i=0 ; i<n1 ; i++){
		tabf[i] = tab1[i];
	}
	for(j=0 ; j<n2 ; j++){
		tabf[i++] = tab2[j];
	}
	for(i=0 ; i<n1+n2 ; i++){
		printf("%d\t", tabf[i]);
	}
	
}
