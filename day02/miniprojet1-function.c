#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define longeurmax 50
#define nbrlivresmax 1000


struct livres{
	char titre[longeurmax];
	char auteur[longeurmax];
	float prix;
	int quantite;
};
typedef struct livres livres;
int menu(){
	int choix;
	printf("1- pour Ajouter un livre au stock\n");
	printf("2- pour Afficher tous les livres disponibles\n");
	printf("3- pour Rechercher un livre par son titre\n");
	printf("4- pour Mettre a jour la quantite d'un livre\n");
	printf("5- pour Supprimer un livre du stock\n");
	printf("6- pour Afficher le nombre total de livres en stock\n");
	printf("0- pour quiter\n");
	printf("votre choix :");
	scanf("%d",&choix);
	printf("\n");
	return choix;
}

void ajouter(livres tablivres[],int nbrlivres){
	printf("entrer les info du livre qui vous voulez ajouter.\n");
	printf("titre : ");
	getchar();
	gets(tablivres[nbrlivres].titre);
	printf("auteur : ");
	gets(tablivres[nbrlivres].auteur);
	printf("prix : ");
	scanf("%f", &tablivres[nbrlivres].prix);
	printf("quantite : ");
	scanf("%d", &tablivres[nbrlivres].quantite);
	printf("l'ajout du livre est effectuee avec succes!\n\n");
}
void afficher(livres tablivres[], int nbrlivres){
	int i;
	if(nbrlivres == 0)
		printf("la bibliotique est vide\n\n");
	else
		for(i = 0 ; i<nbrlivres ; i++)
			printf("livre %d : titre : %s \t auteur : %s \t prix : %f \t quantite : %d \n",  i+1, tablivres[i].titre, tablivres[i].auteur, tablivres[i].prix, tablivres[i].quantite);
		printf("\n");
}
int recherche(livres tablivres[],int nbrlivres,char temp_titre[]){
	int i;
	for(i=0; i<nbrlivres ; i++){
					if(strcmp(temp_titre, tablivres[i].titre) == 0){
						return i;
					}else if(i == nbrlivres-1)
						return -1;
				}
}
int rechercher(livres tablivres[],int nbrlivres){
	char temp_titre[longeurmax];
	int indice;
	printf("entrer le titre du livre a rechercher :");
	getchar();
	gets(temp_titre);
	indice = recherche(tablivres, nbrlivres, temp_titre);
	if(indice == -1)
		printf("ce livre n'existe pas\n\n");
	else
		printf("le livre rechercher est exist :\n titre : %s \t auteur : %s \t prix : %f \t quantite : %d\n\n", tablivres[indice].titre, tablivres[indice].auteur, tablivres[indice].prix, tablivres[indice].quantite);

}

void mtraj(livres tablivres[],int nbrlivres){
	char temp_titre[longeurmax];
	printf("entrer le titre du livre a mettre a jour la quantite :");
	getchar();
	gets(temp_titre);
	int indice = recherche(tablivres, nbrlivres, temp_titre);
	if(indice != -1){
		printf("entrer la nouvelle quantite:");
		scanf("%d", &tablivres[indice].quantite);
		printf("la quantite a ete mise a jour avec succes");
	}else
		printf("ce livre n'existe pas\n\n");
}

int suppression(livres tablivres[],int nbrlivres){
	char temp_titre[longeurmax];
	int i;
	printf("entrer le titre du livre qui vous voulez supprimer:");
	getchar();
	gets(temp_titre);
	int indice = recherche(tablivres, nbrlivres, temp_titre);
	if(indice != -1){
		for(i=indice ; i<nbrlivres; i++){
		strcpy(tablivres[i].titre, tablivres[i+1].titre);
		strcpy(tablivres[i].auteur, tablivres[i+1].auteur);
		tablivres[i].prix = tablivres[i+1].prix;
		tablivres[i].quantite = tablivres[i+1].quantite;
		}
		printf("la suppression est effectuee avec succes\n");
	}else
		printf("ce livre n'exist pas\n");
	return indice;
}

int calnbrtotal(livres tablivres[],int nbrlivres){
	int i, nbr_total_livres=0;
	for(i=0; i<nbrlivres ; i++){
		nbr_total_livres += tablivres[i].quantite;
	}
	return nbr_total_livres;
}
int main(){
	livres tablivres[nbrlivresmax];
	int choix, nbrlivres=0, nbr_total_livres;
	do{
		choix = menu();
		switch(choix){
			case 1: //Ajouter un livre au stock
				ajouter(tablivres, nbrlivres++);
				break;
			case 2 ://Afficher tous les livres disponibles
				afficher(tablivres, nbrlivres);
				break;
			case 3 ://Rechercher un livre par son titre
				rechercher(tablivres, nbrlivres);
				break;
			case 4 ://Mettre a jour la quantite d'un livre
				mtraj(tablivres, nbrlivres);
				break;
			case 5 ://Supprimer un livre du stock
				if(suppression(tablivres, nbrlivres) != -1)
					nbrlivres--;
				break;
			case 6 ://Afficher le nombre total de livres en stock
				nbr_total_livres = calnbrtotal(tablivres, nbrlivres);
				printf("le nombre total du livres est :%d\n\n",nbr_total_livres);
				break;
			case 0 :
				break;
			default : printf("entrer une valide nombre !\n");
		}
	}while(choix != 0);
	return 0 ;
}
