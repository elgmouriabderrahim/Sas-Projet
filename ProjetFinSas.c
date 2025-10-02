#include<stdio.h>
#include <string.h>
#include <ctype.h>
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

int ScanInt(char msg[]){
	char c;
	int nbr;
	do{
		printf("%s :", msg);
		scanf("%d",&nbr);
		c= getchar();
		if(c != '\n'){
			while(getchar()!= '\n');
			if(strcmp(msg, "choix") == 0)
				printf("entrer une nombre!\n");
			else
				printf("invalide %s!\n", msg);
		}
		if(nbr < 0 && strcmp(msg, "age") == 0)
			printf("le %s doit etre positif!\n", msg);
	}while(c != '\n' || nbr < 0);
	return nbr;
}
float ScanFloat(char msg[]){
	float nbr;
	char c;
	do{
		printf("%s :", msg);
		scanf("%f",&nbr);
		c= getchar();
		if(c != '\n'){
			while(getchar()!= '\n');
			printf("invalide %s!\n", msg);
		}
		if(nbr <= 0)
			printf("le %s doit etre positif!\n", msg);
	}while(c != '\n' || nbr <= 0);
	return nbr;
}
void ScanChaine(char chaine[], char msg[]){
	do{
		printf("%s : ", msg);
		gets(chaine);
		if(!EstUneChaine(chaine))
			printf("invalide %s!\n", msg);
	}while(!EstUneChaine(chaine));
}

int EstLeMeme(char ch1[], char ch2[]){
	int i=0;
	if(strlen(ch1) != strlen(ch2))
		return 0;
	while(ch1[i] != '\0'){
		if(tolower(ch1[i]) != tolower(ch2[i]))
			return 0;
		i++;
	}
	return 1;
}
int EstUneChaine(char chaine[]){
	int i;
	if(chaine[0] == '\0' || chaine[0] == ' ')
		return 0;
	while(chaine[i] != '\0'){
		if((chaine[i] < 'a' || chaine[i] > 'z') && (chaine[i] < 'A' || chaine[i] > 'Z') && chaine[i] != ' ')
			return 0;
		i++;
	}
	return 1;
}

int menu_principal(){
	int choix =-1;
	printf("--------menu principal----------\n");
	printf("1- pour Ajouter un animal\n");
	printf("2- pour Afficher les animaux\n");
	printf("3- pour Modifier un animal\n");
	printf("4- pour Supprimer un animal\n");
	printf("5- pour Rechercher un animal\n");
	printf("6- pour les Statistiques\n");
	printf("0- pour auiter\n");
	choix = ScanInt("choix");
	printf("\n");
	return choix;
}
int menu_affichage(){
	int choix = -1;
	printf(" 1- pour Afficher la liste complete\n");
	printf(" 2- pour afficher la liste Trier par nom\n");
	printf(" 3- pour afficher la liste Trier par age\n");
	printf(" 4- pour Afficher uniquement les animaux d'un habitat specifique\n");
	printf(" 0- pour retour au menu principale\n");
	choix = ScanInt("choix");
	printf("\n");
	return choix;
} 
int menu_modification(){
	int choix = -1;
	printf(" 1- pour Modifier l'habitat\n");
	printf(" 2- pour Modifier l'age\n");
	printf(" 3- pour Modifier les deux\n");
	printf(" 0- pour retourner au menu principale\n");
	choix = ScanInt("choix");
	printf("\n");
	return choix;
}
int menu_recherche(){
	int choix = -1;
	printf(" 1- pour Rechercher un animal par id\n");
	printf(" 2- pour Rechercher un animal par nom\n");
	printf(" 3- pour Rechercher un animal par espece\n");
	printf(" 0- pour retourner au menu principale\n");
	choix = ScanInt("choix");
	printf("\n");
	return choix;
}
int menu_statistiques(){
	int choix = -1;
	printf(" 1-  afficher le nombre total d'animaux dans le zoo\n");
	printf(" 2-  afficher l'age moyen des animaux\n");
	printf(" 3-  afficher le Plus jeune animal\n");
	printf(" 4-  afficher le Plus vieux animal\n");
	printf(" 5-  Afficher les espèces les plus representees\n");
	printf(" 0- pour retourner au menu principale\n");
	choix = ScanInt("choix");
	printf("\n");
	return choix;
}

void TrierParNom(animal animals[],int  nbranimals){
	int i, j;
	animal temp;
	for(i=0; i<nbranimals-1 ; i++){
		for(j=0 ; j<nbranimals-1-i ; j++){
			if(strcmp(animals[j].nom, animals[j+1].nom) > 0){
				temp = animals[j];
				animals[j] = animals[j+1];
				animals[j+1] = temp;
			}
		}
	}
}
void TrierParAge(animal animals[],int  nbranimals){
	int i, j;
	animal temp;
	for(i=0; i<nbranimals-1 ; i++){
		for(j=0 ; j<nbranimals-1-i ; j++){
			if(animals[j].age > animals[j+1].age){
				temp = animals[j];
				animals[j] = animals[j+1];
				animals[j+1] = temp;
			}
		}
	}
}

void AjouterAnimal(animal animals[],int nbranimals){
	char c;	
	animals[nbranimals].id = nbranimals+1;
	ScanChaine(animals[nbranimals].nom, "nom");
	ScanChaine(animals[nbranimals].espece, "espece");
	animals[nbranimals].age = ScanInt("age");
	ScanChaine(animals[nbranimals].habitat, "habitat");
	printf("ajouter le poid o/n?\n");
	do{
		printf("votre reponse :");
		scanf("%c", &c);
		while(getchar() != '\n');
		if(c == 'o'){
			animals[nbranimals].poid = ScanFloat("poid");
		}else if(c == 'n'){
			animals[nbranimals].poid = -1;
		}else{
			printf("entrer o/n\n");
		}
	}while(c != 'o' && c != 'n');
}
void AfficherAnimaux(animal animals[], int nbranimals, char habitat[]){
	int i, exist=0;
	char temp[longeurmax];
	
	if(nbranimals == 0)
		printf("le zoo est vide\n\n");
	else{
		if(habitat[0] == '\0'){
			for(i = 0 ; i<nbranimals ; i++){
				printf("ID:%d  nom:%s  espece:%s  age:%d  habitat:%s  ", animals[i].id,animals[i].nom, animals[i].espece, animals[i].age, animals[i].habitat);
				if(animals[i].poid == -1)
					printf("poid:indisponible\n\n");
				else
					printf("poid:%.2f\n\n", animals[i].poid);
			}
		}else{
			for(i = 0 ; i<nbranimals ; i++){
				strcpy(temp, animals[i].habitat);
				if(EstLeMeme(habitat, temp)){
					printf("ID:%d  nom:%s  espece:%s  age:%d  habitat:%s  ", animals[i].id,animals[i].nom, animals[i].espece, animals[i].age, animals[i].habitat);
					if(animals[i].poid == -1)
						printf("poid:indisponible\n\n");
					else
						printf("poid:%.2f\n\n", animals[i].poid);
					exist = 1;
				}
			}
			if(exist == 0)
				printf("il y aucune animal dans cet habitat\n\n");
		}
	}	
}
void Modifier(animal animals[], int nbranimals){
	char temp[longeurmax];
	int indice, choix;
	printf("entrer le nom de l'animal a modifier.\n");
	ScanChaine(temp, "nom");
	indice = Rechercher_nom(animals, nbranimals, temp);
	choix = menu_modification();
	if(choix == 1){
		printf("entrer le neuvel habitat.\n");
		ScanChaine(animals[indice].habitat, "habitat");
		printf("la modification est effectue avec succes!\n\n");
	}else if(choix == 2){
		printf("entrer le nouvel age.\n");
		animals[indice].age = ScanInt("age");
		printf("la modification est effectue avec succes!\n\n");
	}else if(choix == 3){
		printf("entrer le neuvel habitat.\n");
		ScanChaine(animals[indice].habitat, "habitat");
		
		printf("entrer le nouvel age.\n");
		animals[indice].age = ScanInt("age");
		printf("la modification est effectue avec succes!\n\n");
	}else if(choix != 0){
		printf("choix invalide!\n");
	}
}
int Supprimer(animal animals[],int nbranimals){
	int id, i, indice;
	animal temp, empty = {0, "", "", 0, "", -1};
	if(nbranimals == 0){
		printf("le zoo est vide\n\n");
		return -1;
	}else{
		printf("entrer le ID du animal qui vous voulez supprimer.\n");
		id = ScanInt("id");
		indice = Rechercher_id(animals, nbranimals, id);
		if(indice == -1){
			printf("aucun  animal ne correspond a cet ID\n\n");
			return 0;
		}else{
			temp = animals[indice];
			for(i=indice ; i<nbranimals-1; i++)
					animals[i] = animals[i+1];
			animals[i] = empty;
			printf("la suppression est effectuee avec succes!\n\n");
			return 1;
		}
	}
}

int Rechercher_nom(animal animals[], int nbranimals, char nom[]){
	int i;
	char temp[longeurmax];
	for(i=0 ; i<nbranimals ; i++){
		strcpy(temp,animals[i].nom);
		if(EstLeMeme(nom,temp))
			return i;
	}
	return -1;
}
int Rechercher_id(animal animals[], int nbranimals, int id){
	int i;
	for(i=0 ; i<nbranimals ; i++){
		if(animals[i].id == id)
			return i;
	}
	return -1;
}
int Rechercher_espece(animal animals[],int  nbranimals,char espece[]){
	int i, exist=0;
	char temp[longeurmax];
	for(i=0 ; i<nbranimals ; i++){
		strcpy(temp, animals[i].espece);
		if(EstLeMeme(espece, temp)){
			printf("ID:%d  nom:%s  espece:%s  age:%d  habitat:%s  ", animals[i].id,animals[i].nom, animals[i].espece, animals[i].age, animals[i].habitat);
			if(animals[i].poid == -1)
				printf("poid:indisponible\n\n");
			else
				printf("poid:%.2f\n\n", animals[i].poid);
			exist = 1;
		}
	}
	if(!exist)
		printf("il y aucun animal de cet espece\n\n");
}

int NbrTotal(animal animals[]){
	int i=0, cmp=0;
	while(animals[i++].nom[0] != '\0')
		cmp++;
	return cmp;
}
float AgeMoyen(animal animals[],int nbranimals){
	int i, somme=0;
	for(i=0 ; i<nbranimals ; i++)
				somme += animals[i].age;
	return (float)somme/nbranimals;
}
void PlusJeune(animal animals[], int nbranimals){
	int min, i, indice=0;
	if(nbranimals == 0){
		printf("la zoo est vide!\n\n");
	}else{
		min = animals[0].age;
		for(i=1 ; i<nbranimals ; i++)
			if(min > animals[i].age){
				min = animals[i].age;
				indice = i;
			}
		printf("les plus jeune animaux :\n ");
		for(i=0 ; i<nbranimals ; i++)
			if(animals[i].age == animals[indice].age){
				printf("ID:%d  nom:%s  espece:%s  age:%d  habitat:%s  ", animals[i].id,animals[i].nom, animals[i].espece, animals[i].age, animals[i].habitat);
				if(animals[i].poid == -1)
					printf("poid:indisponible\n\n");
				else
					printf("poid:%.2f\n\n", animals[i].poid);
			}
	}
}
void PlusVieux(animal animals[], int nbranimals){
	int max, i, indice=0;
	if(nbranimals == 0){
		printf("la zoo est vide!\n");
	}else{
		max = animals[0].age;
		for(i=1 ; i<nbranimals ; i++)
			if(max < animals[i].age){
				max = animals[i].age;
				indice = i;
			}
		printf("les plus vieux animaux :\n ");
		for(i=0 ; i<nbranimals ; i++)
			if(animals[i].age == animals[indice].age){
				printf("ID:%d  nom:%s  espece:%s  age:%d  habitat:%s  ", animals[i].id,animals[i].nom, animals[i].espece, animals[i].age, animals[i].habitat);
				if(animals[i].poid == -1)
					printf("poid:indisponible\n\n");
				else
					printf("poid:%.2f\n\n", animals[i].poid);
			}
	}
}
void PlusRepresentees(animal animals[], int nbranimals){
	int i, j, k, indice[nbranimals],count,max;
	char ch1[longeurmax], ch2[longeurmax];
	if(nbranimals == 0)
		printf("le zoo est vide!\n");
	else{
		max = 1;
		for(i=0 ; i<nbranimals ; i++){
			strcpy(ch1, animals[i].espece);
			count = 1;
			for(j=i+1 ; j<nbranimals ; j++){
				strcpy(ch2, animals[j].espece);
				if(EstLeMeme(ch1, ch2) == 1)
					count++;
			}
			if(max < count){
				max = count;
				indice[0] = i;
				k=1;
			}else if(max == count){
				indice[k] = i;
				k++;
			}
		}
		printf("les especes les plus representer sont :\n ");
		for(i=0 ; i<k ; i++){
			printf("%s\t", animals[indice[i]].espece);
		}
		printf("\navec %d fois\n\n", max);
	}
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
	{20, "Kong",	 "Gorille",		  13,    "Jungle",	180}
	};
	int nbranimals=NbrTotal(animals), choix_pr,choix_im, nbr, i;
	char temp[longeurmax];
	float agemoyen;
	do{
		choix_pr = menu_principal();
		switch(choix_pr){
			case 0 :
				break;
			case 1 :
				printf("entrer le nombres d'animeaux qui vous voulez ajouter : ");
				scanf("%d", &nbr);
				getchar();
				if(capacitemax < nbr + nbranimals)
					printf("Imposible d'ajouter ce nombre d'animaux, espace insuffisant!\n");
				else{
					for(i=0; i<nbr ; i++){
						AjouterAnimal(animals, nbranimals++);
						if(i != nbr-1)
							printf("l'animal suivant\n");
					}
					if(nbr != 0)
						printf("l'ajout est effectuee avec succes!\n\n");
				}
				break;
			case 2 :
				choix_im = menu_affichage();
				temp[0] = '\0';
				switch(choix_im){
					case 0 :
						break;
					case 1 :
						AfficherAnimaux(animals, nbranimals, temp);
						break;
					case 2 :
						TrierParNom(animals, nbranimals);
						AfficherAnimaux(animals, nbranimals, temp);
						break;
					case 3 :
						TrierParAge(animals, nbranimals);
						AfficherAnimaux(animals, nbranimals, temp);
						break;
					case 4 :
						printf("entrer l'habitat : ");
						scanf("%s", temp);
						AfficherAnimaux(animals, nbranimals, temp);
						break;
					default :
						printf("le choix est invalide!\n");
				}
				break;
			case 3 :
				Modifier(animals, nbranimals);
				break;
			case 4 :
				if(Supprimer(animals, nbranimals))
					nbranimals--;
				break;
			case 5 :
				choix_im = menu_recherche();
				switch(choix_im){
					case 0 :
						break;
					case 1 :
						printf("ID :");
						scanf("%d", &nbr);
						i = Rechercher_id(animals, nbranimals, nbr);
						if(i != -1){
							printf("ID:%d  nom:%s  espece:%s  age:%d  habitat:%s  ", animals[i].id,animals[i].nom, animals[i].espece, animals[i].age, animals[i].habitat);
							if(animals[i].poid == -1)
								printf("poid:indisponible\n\n");
							else
								printf("poid:%.2f\n\n", animals[i].poid);
						}else
							printf("aucun animal ne correspond a cet ID\n\n");
						break;
					case 2 :
						printf("nom :");
						scanf("%s", temp);
						i = Rechercher_nom(animals, nbranimals, temp);
						if(i != -1){
							printf("ID:%d  nom:%s  espece:%s  age:%d  habitat:%s  ", animals[i].id,animals[i].nom, animals[i].espece, animals[i].age, animals[i].habitat);
							if(animals[i].poid == -1)
								printf("poid:indisponible\n\n");
							else
								printf("poid:%.2f\n\n", animals[i].poid);
						}
						else
							printf("aucun animal ne correspond a cet nom\n\n");
						break;
					case 3 :
						printf("espece :");
						scanf("%s", temp);
						Rechercher_espece(animals, nbranimals, temp);
						break;
					default :
						printf("choix invalide!\n");
					}
					break;
			case 6 :
				do{
					choix_im = menu_statistiques();
					switch(choix_im){
						case 0 :
							break;
						case 1 :
							printf("le nombre total d'animaux dans le zoo : %d\n\n", NbrTotal(animals));
							break;
						case 2 :
							agemoyen = AgeMoyen(animals, nbranimals);
							if(nbranimals==0)
								printf("le zoo est vide\n");
							else
								printf("l'age moyen est :%.2f\n\n", agemoyen);
							break;
						case 3 :
							PlusJeune(animals, nbranimals);
							break;
						case 4 :
							PlusVieux(animals, nbranimals);
							break;
						case 5 :
							PlusRepresentees(animals, nbranimals);
							break;
						default:
							printf("entrer une valide choix!\n\n");
							break;
					}
				}while(choix_im != 0);
				break;
			default :
				printf("choix invalide!\n");
		}
	}while(choix_pr != 0);
}
