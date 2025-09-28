#include <stdio.h>
struct person{
	char nom[20];
	char prenom[20];
	int age;
};
typedef struct person person;
int main(){
	person p;
	printf("entrer les infor du person .\n");
	printf("prenom : ");
	scanf("%s",p.prenom);
	printf("nom : ");
	scanf("%s",p.nom);
	printf("age : ");
	scanf("%d",&p.age);
	printf("prenom : %s\tnom : %s\tage : %d", p.prenom, p.nom, p.age);
	return 0;
}
