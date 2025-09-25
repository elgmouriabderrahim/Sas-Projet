#include<stdio.h>

int main(int argc, char const *argv){
	float longeur, largeur;
	printf("entrer le longeur du rectangle : ");
	scanf("%f", &longeur);
	printf("entrer le largeur du rectangle : ");
	scanf("%f", &largeur);
	printf("la surface du cette rectangle est : %f", longeur*largeur);
	return 0;
}
