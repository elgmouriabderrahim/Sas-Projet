#include <stdio.h>

int main(int argc, char const *argv[]){
	float moy, note, somme;
	int nb = 0, rep = 1;
	do{
		printf("entrer un note : ");
		scanf("%f", &note);
		somme += note;
		nb++;
		printf("voulez vous entrer un autre note? \n entrer 1 si oui :");
		scanf("%d", &rep);
	}while(rep == 1);
	moy = somme / nb;
	if(moy < 0)
		printf("les valeurs doit etres superieur a zero");
	printf("votre note est %f\n", moy);
	if(moy < 10)
	printf("vous avez recale");
	else if( moy < 12)
		printf("vous avez un mention passable");
	else if(moy < 14)
		printf("vous avez un mention de assez bien");
	else if(moy < 16)
		printf("vous avez un mention de bien");
	else if(moy <= 20)
		printf("vous avez un mention assez de tres bien");
	else
		printf("les valeurs quis vous avez entrer sont pas reel");
		
}
