#include <stdio.h>

int main(int argc, char const *argv[]){
	float nbr1, nbr2, nbr3, mp;
	printf("entrer le nbr 1:");
	scanf("%f", &nbr1);
	printf("entrer le nbr 2:");
	scanf("%f", &nbr2);
	printf("entrer le nbr 3:");
	scanf("%f", &nbr3);
	mp = (nbr1*2+nbr2*3+nbr3*5)/10;
	printf("le moyenne ponderee est:%f", mp);
	return 0;
}
