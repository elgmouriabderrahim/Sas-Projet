#include <stdio.h>

int main(){
	int nb;
	int nbi,x = 0;
	printf("entrer un nombrer :");
	scanf("%d", &nb);
	while(nb%10 != 0){
		nbi = nb%10;
		nb = nb/10;
		x = x*10 + nbi;
	}
	printf("%d", x);
	return 0;
}
