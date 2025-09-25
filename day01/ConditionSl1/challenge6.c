#include <stdio.h>

int main(int argc, char const *argv[]){
	int nb;
	printf("entrer un nombre: ");
	scanf("%d", &nb);
	if(nb > 0)
		printf("positif");
	else if(nb < 0)
		printf("nigatif");
	else
		printf("nul");
}
