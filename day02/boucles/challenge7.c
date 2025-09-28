#include <stdio.h>

int main(){
	int nb, i, x=0,y=1, temp;
	printf("entrer un nombrer :");
	scanf("%d", &nb);
	if(nb == 1)
		printf("0");
	else
		printf("0\t1\t");
	for(i=3 ; i<= nb ; i++){
			printf("%d\t", x+y);
			temp=x+y;
			x=y;
			y=temp;
	}
	return 0;
}

