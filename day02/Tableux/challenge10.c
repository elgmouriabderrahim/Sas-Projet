#include <stdio.h>

main(){
	int n,i,r;
	printf("entrer le nombrer des elements du tableux:");
	scanf("%d", &n);
	int tab[n];
	for(i=0 ; i<n ; i++){
		printf("case %d = ", i+1);
		scanf("%d", &tab[i]);
	}
	printf("entrer l'element rechercher:");
	scanf("%d", &r);
	i = 0;
	while(r!=tab[i] && i<n){
		i++;
	}
	if(r==tab[i])
	printf("l'element est present");
	else
	printf("l'element pas present");
}
