#include <stdio.h>

int main(){
	int nb, i, somme = 0;
	printf("entrer un nombrer :");
	scanf("%d", &nb);
	for(i=1 ; i<=nb ; i++){
		somme += i;
	}
	printf("%d", somme);
	return 0;
}

