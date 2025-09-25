#include <stdio.h>
#include <math.h>

int main(int argc , char const *argv[]){
	float a,b,c, dilta;
	printf("entrer les coefficions du equation ax^2 + bx + c\na:");
	scanf("%f", &a);
	printf("b:");
	scanf("%f", &b);
	printf("c:");
	scanf("%f", &c);
	if(a == 0){
		if(b == 0 && c==0)
			printf("tous les nombres reel sont solutions");
		else
			printf("un seule solution :%f",-c/b);
	}else{
		float dilta;
		dilta = b*b - 4*a*c;
		if(dilta < 0)
			printf("pas de solutins");
		if(dilta == 0)
			printf("l'equation accepter un seule solution : %f", -b/(2*a));
		if(dilta > 0)
			printf("duex solution reel/\nx1 = %f \t x2 = %f", (-b-sqrt(dilta))/(2*a), (-b+sqrt(dilta))/(2*a));
	}
	return 0;
}
