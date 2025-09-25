#include <stdio.h>

int main(int argc, char cont *argv[]){
    char nom[20], prenom[20], sexe[10], email[30];
    int age;
    printf("entrer votre nom:");
    scanf("%s", nom);
    printf("entrer votre prenom:");
    scanf("%s", prenom);
    printf("entrer votre sexe:");
    scanf("%s", sexe);
    printf("entrer votre age:");
    scanf("%d", &age);
    printf("entrer votre email:");
    scanf("%s", email);
    printf("nom:%s\n prenom:%s\n sexe:%s\n age:%d\n email:%s", nom, prenom, sexe, age, email);
    return 0;
}
