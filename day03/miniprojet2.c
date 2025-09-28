#include<stdio.h>
#include <string.h>
#define longeurmax 50
#define nbrcontactsmax 1000


struct contact{
	char nom[longeurmax];
	char numero[longeurmax];
	char email[longeurmax];
};
typedef struct contact contact;
contact temp_contact;
int menu(){
	int choix;
	printf("1- pour Ajouter un contact\n");
	printf("2- pour modifier un contact\n");
	printf("3- pour Supprimer un contact\n");
	printf("4- pour Afficher tous les contacts\n");
	printf("5- pour Rechercher un contact\n");
	printf("0- pour quiter\n");
	printf("votre choix :");
	scanf("%d",&choix);
	printf("\n");
	return choix;
}

int VerifyNumber(char numero[]){
		int verify = 1, i;
		if(numero[0] != '+' && (numero[0] < '0' || numero[0] > '9')){
			printf("le numero est invalide, renterer le numero!\n");
			verify = 0;
		} else{
			i = 1;
			while(numero[i] != '\0'){
				if(numero[i] < '0' || numero[i] > '9'){
					printf("le numero est invalide renterer le numero!\n");
					verify = 0;
					break;
				}
				i++;	
			}
		}
		return 	verify;
}

int VerifyEmail(char email[]){
	int point = 0, arobas = 0, verify = 1, i = 0;
		while(email[i] != '\0'){
				if(email[i] == '.')
					point++;
				if(email[i] == '@')
					arobas++;
				i++;	
		}
		if(point < 1 || arobas != 1){
			printf("l'email doit etre contient au moin un . et une @\n");
			verify = 0;
		}
		return verify;
}

void AjouterContact(contact contacts[],int nbrcontacts){
	int i ,verify;
	printf("entrer les info du contact.\n");
	printf("nom : ");
	getchar();
	gets(contacts[nbrcontacts].nom);
	do{
		printf("numero : ");
		gets(contacts[nbrcontacts].numero);
		verify = VerifyNumber(contacts[nbrcontacts].numero);
	}while(verify == 0);
	do{
		printf("email : ");
		gets(contacts[nbrcontacts].email);
		verify = VerifyEmail(contacts[nbrcontacts].email);	
	}while(verify == 0);
	printf("l'ajout du contact est effectuee avec succes!\n\n");
}
void AfficherContacts(contact contacts[], int nbrcontacts){
	if(nbrcontacts == 0)
		printf("le carnet de contacts est vide\n\n");
	else{
		int i;
		for(i = 0 ; i<nbrcontacts ; i++){
			printf("contact %d : nom : %s \t numero : %s \t email : %s\n",  i+1, contacts[i].nom, contacts[i].numero, contacts[i].email);
			printf("\n");
		}
	}	
}
int recherche(contact contacts[],int nbrcontacts,char temp_nom[]){
	int i;
	for(i=0; i<nbrcontacts ; i++){
					if(strcmp(temp_nom, contacts[i].nom) == 0){
						return i;
					}else if(i == nbrcontacts-1)
						return -1;
				}
}
void RechercherContact(contact contacts[],int nbrcontacts){
	char temp_nom[longeurmax];
	int indice;
	if(nbrcontacts == 0)
		printf("le carnet de contacts est vide\n\n");
	else{
		printf("entrer le nom de contact a rechercher :");
	getchar();
	gets(temp_nom);
	indice = recherche(contacts, nbrcontacts, temp_nom);
	if(indice == -1)
		printf("ce contact n'existe pas\n\n");
	else
		printf("le contact rechercher est exist :\n nom : %s \t numero : %s \t email : %s\n\n", contacts[indice].nom, contacts[indice].numero, contacts[indice].email);
	}
}

void ModifierContact(contact contacts[],int nbrcontacts){
	if(nbrcontacts == 0)
		printf("le carnet de contacts est vide\n\n");
	else{
		int verify;
		char temp_nom[longeurmax];
		printf("entrer le nom du person a mettre a jour les info :");
		getchar();
		gets(temp_nom);
		int indice = recherche(contacts, nbrcontacts, temp_nom);
		if(indice != -1){
			do{
			printf("entrer le nouveu numero de telephone : ");
			gets(contacts[indice].numero);
			verify = VerifyNumber(contacts[indice].numero);		
		}while(verify == 0);
		do{
			printf("entrer le nouveu email : ");
			gets(contacts[indice].email);
			verify = VerifyEmail(contacts[indice].email);		
		}while(verify == 0);
		printf("les info sont  mettre a jour avec succes\n\n");
		}else
			printf("cette person n'existe pas dans les contacts\n\n");	
		}
}	

int SuppressionContact(contact contacts[],int nbrcontacts){
	if(nbrcontacts == 0){
		printf("le carnet de contacts est vide\n\n");
		return -1;
	}else{
		char temp_nom[longeurmax];
		int i;
		printf("entrer le nom du contact qui vous voulez supprimer:");
		getchar();
		gets(temp_nom);
		int indice = recherche(contacts, nbrcontacts, temp_nom);\
		if(indice != -1){
			strcpy(temp_contact.nom, contacts[indice].nom);
			strcpy(temp_contact.numero, contacts[indice].numero);
			strcpy(temp_contact.email, contacts[indice].email);
			for(i=indice ; i<nbrcontacts; i++){
				strcpy(contacts[i].nom, contacts[i+1].nom);
				strcpy(contacts[i].numero, contacts[i+1].numero);
				strcpy(contacts[i].email, contacts[i+1].email);
			}
			printf("la suppression est effectuee avec succes\n");
		}else
			printf("ce contact n'exist pas\n\n");
		return indice;
		}
		
}
int main(){
	contact contacts[nbrcontactsmax];
	int choix, nbrcontacts=0;
	do{
		choix = menu();
		switch(choix){
			case 1: //Ajouter un contact
				AjouterContact(contacts, nbrcontacts++);
				break;
			case 2 ://modifier un contact
				ModifierContact(contacts, nbrcontacts);
				break;
			case 3 ://Supprimer un contact 
				if(SuppressionContact(contacts, nbrcontacts) != -1)
					nbrcontacts--;
				break;
			case 4 ://Afficher tous les contacts
				AfficherContacts(contacts, nbrcontacts);
				break;
			case 5 ://Rechercher un contact
				RechercherContact(contacts, nbrcontacts);
				break;
			case 0 :
				break;
			default : printf("entrer une valide choix !\n\n");
		}
	}while(choix != 0);
	return 0 ;
}
