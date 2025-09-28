#include <stdio.h>

int main(){
	int i, n, k, premier;
	printf("entrer un nombrer :");
	scanf("%d", &n);
	for(k=2 ; k<=n; k++){
		premier = 1;
		for(i=2 ; i< k ; i++){
			if(k%i == 0)
				premier = 0;
				break;
		}
		if(premier)
			printf("%d\t",k);
	}
}
