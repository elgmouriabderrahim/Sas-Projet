#include <stdio.h>

int main(int argv, char const *argc[]){
	int nb;
	printf("entrer un nombre :");
	scanf("%d", &nb);
	if(nb%2 == 0)
		printf("%d est un nombre pair",nb);
	else
		printf("%d est un nombre impair",nb);
	return 0;
}
