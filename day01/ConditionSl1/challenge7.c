#include <stdio.h>

int main(int argc, char const *argv[]){
	char c;
	printf("entrer un caractere: ");
	scanf("%c", &c);
	if(c > 'A'){
		if(c < 'Z')
			printf("alphabet majuscule");
		else
			printf("pas un alphabet majuscule");
	}else
		printf("pas un alphabet majuscule");
		
}
