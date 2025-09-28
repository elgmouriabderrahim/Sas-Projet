#include <stdio.h>

int main(){
	int i ,j ,nb;
	printf("entrer le nombrer de lignes :");
	scanf("%d", &nb);
	for(i = 0 ; i < nb ; i++){
		for(j=0; j< nb-i;j++)
			printf(" ");
		for(j=0; j< i*2+1;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
