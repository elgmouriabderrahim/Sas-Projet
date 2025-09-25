#include <stdio.h>
int main(int argc, char const *argv[]){
	float Yards, Km;
	printf("entrer la distance en kilometre:");
	scanf("%f",&Km);
	Yards = Km * 1093.61;
	printf("la distance en Yards est:%f", Yards);
	return 0;
}
