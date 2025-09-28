#include <stdio.h>

int main(){
	int i, nb;
	printf("entrer un nombrer :");
	scanf("%d", &nb);
	for(i = 10 ; i > 0 ; i--){
		printf("%d x %d = %d\n",nb, i, nb*i);
	}
	return0;
}
