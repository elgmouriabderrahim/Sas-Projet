#include <stdio.h>

main(){
	int n,i,vr,nv;
	printf("entrer le nombrer des elements du tableux:");
	scanf("%d", &n);
	int tab[n];
	for(i=0 ; i<n ; i++){
		printf("case %d = ", i+1);
		scanf("%d", &tab[i]);
	}
	printf("entrer la valeur a remplacer:");
	scanf("%d", &vr);
	printf("entrer la valeur a remplacer:");
	scanf("%d", &nv);
	for(i=0 ; i<n ; i++){
		if(vr == tab[i])
			tab[i] = nv;
	}
	for(i=0 ; i<n ; i++){
		printf("%d\n",tab[i]);
	}
}
