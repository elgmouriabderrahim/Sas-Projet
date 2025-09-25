#include <stdio.h>
int main(int argc, char const argv[]){
	float k, c;
	printf("entrer la tempirature en celsius:");
	scanf("%f",&c);
	k = c + 273.15;
	printf("la temperature en kelvin est:%f", k);
	return 0;
}
