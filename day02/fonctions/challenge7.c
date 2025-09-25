#include <stdio.h>
#include <string.h>

char * inv(char chaine[]){
	int n, i;
	n = strlen(chaine);
	char chainei[n];
	for(i = n-1; i >=0; i--)
		chainei[n-i-1] = chaine[i];
	chainei[n-i-1] = '\0';
	strcpy(chaine, chainei);
	return chaine;
}
int main(){
	char chaine[100];
	printf("entrer une phrase:");
	gets(chaine);
	printf("%s inverser est : ", chaine);
	printf("%s", inv(chaine));
	return 0;
}
