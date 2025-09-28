#include <stdio.h>

int main(){
	int nb, i;
	printf("entrer un nombrer :");
	scanf("%d", &nb);
	for(i=1 ; i<=nb ; i++){
		if(nb%i == 0)
			printf("%d\t", i);
	}
	return 0;
}

