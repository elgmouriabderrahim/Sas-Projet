#include <stdio.h>

int main(int argc, char const *argv[]){
	int a,b;
	printf("entrer deux valeurs:\n");
	scanf("%d %d", &a, &b);
	if(a == b)
		printf("le triple de somme est : %d",3*(a+b));
	else 
		printf("la somme est : %d", a+b);
	return 0;
}
