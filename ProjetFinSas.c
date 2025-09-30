#include<stdio.h>
#include <string.h>
#define longeurmax 50
#define capacitemax 200
struct Animal{
	int id;
	char nom[longeurmax];
	char espece[longeurmax];
	int age;
	char habitat[longeurmax];
	float poid;
};
typedef struct Animal animal;

int menu_principal(){
	int choix = -1;
	printf("--------menu principal----------\n");
	printf("1- pour Ajouter un animal\n");
	printf("2- pour Afficher les animaux\n");
	printf("3- pour Modifier un animal\n");
	printf("4- pour Supprimer un animal\n");
	printf("5- pour Rechercher un animal\n");
	printf("6- pour les Statistiques\n");
	printf("0- pour auiter\n");
	printf("votre choix :");
	scanf("%d",&choix);
	while(getchar()!= '\n');
	printf("\n");
	return choix;
}
int menu_affichage(){
	int choix = -1;
	printf("\t1- pour Afficher la liste complète\n");
	printf("\t2- pour afficher la liste Trier par nom\n");
	printf("\t3- pour afficher la liste Trier par âge\n");
	printf("\t4- pour Afficher uniquement les animaux d’un habitat spécifique\n");
	printf("\tvotre choix :");
	scanf("%d", &choix);
	while(getchar()!= '\n');
	printf("\n");
	return choix;
}
int menu_modification(){
	int choix = -1;
	printf("\t1- pour Modifier l’habitat d’un animal\n");
	printf("\t2- pour Modifier l’âge\n");
	printf("\t3- pour Modifier les deux\n");
	printf("\tvotre choix :");
	scanf("%d", &choix);
	while(getchar()!= '\n');
	printf("\n");
	return choix;
}
int menu_recherche(){
	int choix = -1;
	printf("\t1- pour Rechercher un animal par id\n");
	printf("\t2- pour Rechercher un animal par nom\n");
	printf("\t3- pour Rechercher un animal par espece\n");
	printf("\tvotre choix :");
	scanf("%d", &choix);
	while(getchar()!= '\n');
	printf("\n");
	return choix;
}
int menu_statistiques(){
	int choix = -1;
	printf("\t1-  afficher le nombre total d’animaux dans le zoo id\n");
	printf("\t2-  afficher l'age moyen des animaux\n");
	printf("\t3- afficher le Plus vieux animal\n");
	printf("\t4- afficher le Plus jeune animal\n");
	printf("\t5- Afficher les espèces les plus représentées\n");
	printf("\t0- pour auiter");
	printf("\tvotre choix :");
	scanf("%d", &choix);
	while(getchar()!= '\n');
	printf("\n");
	return choix;
}


void Ajouteranimal(animal animals[],int nbranimals){
	int i;
	animals[nbranimals].id = nbranimals -1;
	printf("entrer les informations suivants.\n");
	printf("nom : ");
	gets(animals[nbranimals].nom);
	printf("espece : ");
	gets(animals[nbranimals].espece);
	printf("age : ");
	scanf("%d", &animals[nbranimals].age);
	getchar();
	printf("habitat : ");
	gets(animals[nbranimals].habitat);
	printf("poid : ");
	scanf("%f", &animals[nbranimals].habitat);
	printf("l'ajout du animal est effectuee avec succes!\n\n");
}





int main(){
	animal animals[capacitemax]= {
	{1,  "Simba", 	 "Lion", 		  5, 	 "Savane",  190.5},
	{2,	 "Nala", 	 "Lion"	,		  4,	 "Savane",	175},
	{3,	 "ShereKhan","Tigre",		  8,	 "Jungle",	220.3},
	{4,	 "Baloo", 	 "Ours",		  12, 	 "Foret",	310},
	{5,	 "Raja", 	 "Elephant",	  15,    "Savane",	540.7},
	{6,	 "Marty",	 "Zebre",		  6,	 "Savane",	300.2},
	{7,	 "Gloria",	 "Hippopotame",	  10,    "Riviere", 450},
	{8,	 "Alex",	 "Lion",		  7,	 "Savane",	200},
	{9,	 "Julien",	 "Lemurien",	  3,	 "Jungle",	12.5},
	{10, "Melman",	 "Girafe",		  9,	 "Savane",	390.8},
	{11, "Timon",	 "Suricate",	  2,	 "Desert",	1.2},
	{12, "Pumbaa",	 "Phacochere",	  5,	 "Savane",	120},
	{13, "Scar",	 "Lion",		  11,    "Savane",	210.4},
	{14, "Kaa",		 "Serpent",		  6,	 "Jungle",	45},
	{15, "Iko",		 "Perroquet",	  4,	 "Jungle",	2.1},
	{16, "Dumbo",	 "Elephant",	  3,	 "Savane",	320},
	{17, "Kiki",	 "Chien sauvage", 7,	 "Savane",	25},
	{18, "Donatello","Tortue",		  40,    "Riviere", 90.5},
	{19, "Polly",	 "Oiseau",		  5,	 "Jungle",	1.5},
	{20, "Kong",	 "Gorille",		  13,    "Jungle",	180},
	};
	int nbranimals=20, choix;
	do{
		choix = menu_principal();
		switch(choix){
			case 0 :
				break;
			case 1 :
				Ajouteranimal(animals, nbranimals++);
				break;
			
		}
	}while(choix != 0);
	
}
