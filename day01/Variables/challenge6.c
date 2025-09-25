#include <stdio.h>

int main(int argc, char const *argv[]){
	float a,b;
	printf("entrer a:");
	scanf("%f", &a);
	printf("entrer b:");
	scanf("%f", &b);
	printf("%.2f + %.2f = %.2f \n%.2f - %.2f = %.2f   \n%.2f * %.2f = %.2f\n", a, b, a+b, a, b, a-b, a, b, a*b);
	if(b != 0)
		printf("%.2f / %.2f = %.2f", a, b, a/b);
	return 0;
}
