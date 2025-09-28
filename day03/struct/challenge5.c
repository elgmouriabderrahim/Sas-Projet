#include <stdio.h>
struct livre{
	char titre[50];
	char auteur[50];
	int annee;
};
typedef struct livre livre;
livre init(){
	livre l = {"letitre", "mohammed", 2000};
	return l;
}
int main(){
	livre l;
	l = init();
	printf("titre : %s\nauteur : %s\nannee : %d", l.titre ,l.auteur, l.annee);
	return 0;
}
