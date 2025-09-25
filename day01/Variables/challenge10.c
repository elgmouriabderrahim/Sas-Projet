#include<stdio.h>
# define pi 3.1415

int main(int argc, char const *argv){
	float r, v;
	printf("entrer le rayon du sphere : ");
	scanf("%f", &r);
	if(r<0)
		printf("le rayon doit etre superieur a 0");
	else{
		v = (4/3) * pi * r*r*r;
		printf("volume = %f", v);
	}
	
	return 0;
}
