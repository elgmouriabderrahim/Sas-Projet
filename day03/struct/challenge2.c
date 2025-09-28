#include <stdio.h>
struct etudiant{
	char nom[20];
	char prenom[20];
	int notes[10];
};
typedef struct etudiant etudiant;
int main(){
	etudiant e;
	int i;
	printf("entrer les infor du l'etudiant .\n");
	printf("prenom : ");
	scanf("%s",e.prenom);
	printf("nom : ");
	scanf("%s",e.nom);
	printf("remplir les notes.\n");
	for(i= 0 ; i<10 ; i++){
		printf("note %d :", i+1);
		scanf("%d", &e.notes[i]);
	}
	printf("prenom : %s\tnom : %s\n", e.prenom, e.nom);
	for(i= 0 ; i<10 ; i++){
		printf("%d\t", e.notes[i]);
	}
	return 0;
}
