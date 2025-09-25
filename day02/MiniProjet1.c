#include<stdio.h>

int main(){
	char titre[1000][100],auteur[1000][50], temp_titre[100];
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
		switch(choix){
			case 1:
				printf("entrer les info du livre qui vous avez ajouter.\n");
				printf("titre : ");
				scanf("%s", titre[n]);
				printf("auteur : ");
				scanf("%s", auteur[n]);
				printf("prix : ");
				scanf("%f", &prix[n]);
				printf("quantite : ");
				scanf("%i", &quantite[n]);
				n++;
				break;
			case 2 :
				if(n == 0)
					printf("la bibliotique est vide\n");
				for(i = 0 ; i<n ; i++){
					printf("livre %d : titre : %s \t auteur : %s \t prix : %f \t quantite : %d \n",  i+1, titre[i], auteur[i], prix[i], quantite[i]);
				}
				break;
			case 3 :
				printf("entrer le titre du livre a rechercher :");
				scanf("%s",temp_titre);
				for(i=0; i<n ; i++){
					var = 1;
					for(j=0; j<100 ; j++){
						if(temp_titre[j] != titre[i][j]){
							var = 0;
							break;
						}
					}
					if(var == 1)
					break;
				}
				if(var == 1)
					printf("le livre rechercher est exist :\n titre : %s \t auteur : %s \t prix : %f \t quantite : %d\n", titre[i], auteur[i], prix[i], quantite[i]);
				else
					printf("le livre rechercher n'exist pas\n");
				break;
			case 4 :
				printf("entrer le titre du livre qui vous avez mettre a jour la quantite : ");
				scanf("%s",temp_titre);
				printf("entrer la nouvelle quantite: ");
				scanf("%d", &temp_quantite);
				for(i=0; i<n ; i++){
					var = 1;
					for(j=0; j<100 ; j++){
						if(temp_titre[j] != titre[i][j]){
							var = 0;
							break;
						}
					}
					if(var == 1)
					break;
				}
				quantite[i] = temp_quantite;
				break;
			case 5 :
				printf("entrer le titre du livre que vous avez supprimer :");
				scanf("%s",temp_titre);
				for(i = 0; i < n ; i++){
					var = 1;
					for(j = 0 ; j < 100 ; j++){
						if(temp_titre[j] != titre[i][j]){
							var = 0;
							break;	
						}
					}
					if(var == 1)
						break;
				}
				if(var == 1){
					n--;
					for(k=i ; k<n ; k++){
						for(j=0 ; j<100 ; j++)
							titre[k][j] = titre[k+1][j];
						for(j=0 ; j<50 ; j++)
							auteur[k][j] = auteur[k+1][j];
						prix[k] = prix[k+1];
						quantite[k] = quantite[k+1];
					}	
				}
				break;
			case 6 :
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
