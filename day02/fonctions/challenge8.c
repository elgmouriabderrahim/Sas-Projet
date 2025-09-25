#include <stdio.h>

int parite(int n){
	if(n%2 == 0)
		return 1;
	else
		return 0;
}
main(){
	int nb;
	printf("enttrer un valeur entier :");
	scanf("%d", &nb);
	if(parite(nb))
		printf("pair");
	else
		printf("impair");
}
