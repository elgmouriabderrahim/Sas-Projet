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
	for(i=0 ; i<n ; i++){
		for(j=i ; j<n ; j++){
			if(tab[i]>tab[j]){
				tompo = tab[j];
				tab[j]= tab[i];
				tab[i]= tompo;
			}	
		}
	}
	printf("tableux tries:\n");
	for(i=0 ; i<n ; i++){
		printf("%d\t", tab[i]);
	}
	
}
