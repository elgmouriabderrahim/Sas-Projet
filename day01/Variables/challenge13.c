#include <stdio.h>
#include <math.h>
main(){
	int nb, nbr, q, i = 0,n=0;
	printf("entrer un nombre :");
	scanf("%d",&nbr);
	nb = nbr;
	while(pow(2,n)<nb)
		n++;
	int tab[n+1];
	do{
		q = nb/2;
		tab[i++] = nb%2;
		nb = q;
	}while(q != 0);
	printf("en binaire:\n");
	for(i=n-1; i>=0;i--){
		printf("%d", tab[i]);
	}
	printf("\nen hexadicimale:%X", nbr);
	
}
