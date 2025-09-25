#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]){
	float nbr1, nbr2, nbr3, mg;
	printf("entrer le nbr 1:");
	scanf("%f", &nbr1);
	printf("entrer le nbr 2:");
	scanf("%f", &nbr2);
	printf("entrer le nbr 3:");
	scanf("%f", &nbr3);
	mg = pow((nbr1 * nbr2 * nbr3),1.0/3.0);
	printf("le moyenne geometrique est:%f", mg);
	return 0;
}
