#include<stdio.h>

int main(){
	char titre[1000][100],auteur[1000][50], temp_titre[100], temp_auteur[50];
	float prix[1000], temp_prix;
	int quantite[1000], temp_quantite, nbrtotal, choix = 1, n=0, i, j,k;
	int var;

	while(choix != 0){
		printf("entrer 1 pour Ajouter un livre au stock\n");
		printf("entrer 2 pour Afficher tous les livres disponibles\n");
		printf("entrer 3 pour Rechercher un livre par son titre\n");
		printf("entrer 4 pour Mettre a jour la quantite d'un livre\n");
		printf("entrer 5 pour Supprimer un livre du stock\n");
		printf("entrer 6 pour Afficher le nombre total de livres en stock\n");
		printf("entrer 0 pour quiter\n");
		printf("votre choix :");
		scanf("%d", &choix);
		getchar();
		switch(choix){
			case 1: //Ajouter un livre au stock
				printf("entrer les info du livre qui vous voulez ajouter.\n");
				printf("titre : ");
				scanf("%[^\n]", titre[n]);
				getchar();
				printf("auteur : ");
				scanf("%[^\n]", auteur[n]);
				getchar();
				printf("prix : ");
				scanf("%f", &prix[n]);
				printf("quantite : ");
				scanf("%i", &quantite[n]);
				printf("l'ajoute du livre est effectuee avec succes!\n");
				n++;
				break;
			case 2 ://Afficher tous les livres disponibles
				if(n == 0)
					printf("la bibliotique est vide\n");
				for(i = 0 ; i<n ; i++){
					printf("livre %d : titre : %s \t auteur : %s \t prix : %f \t quantite : %d \n",  i+1, titre[i], auteur[i], prix[i], quantite[i]);
				}
				break;
			case 3 ://Rechercher un livre par son titre
				printf("entrer le titre du livre a rechercher :");
				scanf("%[^\n]",temp_titre);
				getchar();
				for(i=0; i<n ; i++){
					var = 1;
					j=0;
					while(temp_titre[j] != '\0' || titre[i][j] != '\0'){
						if(temp_titre[j] != titre[i][j] && temp_titre[j] != (titre[i][j]+32) && (temp_titre[j]+32) != titre[i][j]){
							var = 0;
							break;
						}
						j++;
					}
					if(var == 1)
					break;
				}
				if(var == 1)
					printf("le livre rechercher est exist :\n titre : %s \t auteur : %s \t prix : %f \t quantite : %d\n", titre[i], auteur[i], prix[i], quantite[i]);
				else
					printf("le livre rechercher n'exist pas\n");
				break;
			case 4 ://Mettre a jour la quantite d'un livre
				printf("entrer le titre du livre qui vous avez mettre a jour la quantite : ");
				scanf("%[^\n]",temp_titre);
				getchar();
				printf("entrer la nouvelle quantite: ");
				scanf("%d", &temp_quantite);
				for(i=0; i<n ; i++){
					var = 1;
					j=0;
					while(temp_titre[j] != '\0' && titre[i][j] != '\0'){
						if(temp_titre[j] != titre[i][j] && temp_titre[j] != (titre[i][j]+32) && (temp_titre[j]+32) != titre[i][j]){
							var = 0;
							break;
						}
						j++;
					}
					if(var == 1)
					break;
				}
				quantite[i] = temp_quantite;
				printf("l'operation est effectuee avec succes!\n");
				break;
			case 5 ://Supprimer un livre du stock
				printf("entrer le titre du livre que vous avez supprimer :");
				scanf("%[^\n]",temp_titre);
				getchar();
				for(i = 0; i < n ; i++){
					var = 1;
					j=0;
					while(temp_titre[j] != '\0' && titre[i][j] != '\0'){
						if(temp_titre[j] != titre[i][j] && temp_titre[j] != (titre[i][j]+32) && (temp_titre[j]+32) != titre[i][j]){
							var = 0;
							break;
						}
						j++;
					}
					if(var == 1)
						break;
				}
				if(var == 1){
					n--;
					while(auteur[i][j] != '\0'){
						temp_auteur[j] = auteur[i][j];
						j++;
					}
					temp_auteur[j] = '\0';
					temp_prix = prix[i];
					temp_quantite = quantite[i];
					
					j=0;
					for(k=i ; k<n ; k++){
						j=0;
						while(titre[k+1][j] != '\0'){
							titre[k][j] = titre[k+1][j];
							j++;
						}
						titre[k][j] = '\0';
						
						j=0;
						while(auteur[k+1][j] != '\0'){
							auteur[k][j] = auteur[k+1][j];
							j++;
						}
						auteur[k][j] = '\0';
						
						prix[k] = prix[k+1];
						quantite[k] = quantite[k+1];
					}
					printf("la suppression est effectuee avec succes!\n");
				}else
					printf("le livre qui vou voulez suppremer n'exist pas");
				break;
			case 6 ://Afficher le nombre total de livres en stock
				nbrtotal = 0;
				for(i=0 ; i<n ; i++){
					nbrtotal += quantite[i];
				}
				printf("le nombre total des livres dans la bibliotiques est : %d\n", nbrtotal);
				
			case 0 :
				break;
				
			default : printf("entrer une valide nombre !\n");
		}
	}
	return 0 ;
}
