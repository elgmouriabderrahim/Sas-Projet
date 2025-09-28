#include <stdio.h>
struct rectangle{
	float longeur, largeur;
};
typedef struct rectangle rectangle;
float calculaire(rectangle r){
	return r.longeur*r.largeur;
}
int main(){
	rectangle r;
	printf("entrer la longreur de rectangle:");
	scanf("%f", &r.longeur);
	printf("entrer le largeur de rectangle:");
	scanf("%f", &r.largeur);
	printf("l'aire de cette rectangle est :%.3f",calculaire(r));
	return 0;
}
