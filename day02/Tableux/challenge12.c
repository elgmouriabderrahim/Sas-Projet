#include <stdio.h>

main(){
	int n,i;
	printf("entrer le nombrer des elements du tableux:");
	scanf("%d", &n);
	int tab[n];
	for(i=0 ; i<n ; i++){
		printf("case %d = ", i+1);
		scanf("%d", &tab[i]);
	}
	for(i=0 ; i<n ; i++){
		if(tab[i]%2 == 0)
		printf("%d\t",tab[i]);
	}
}
