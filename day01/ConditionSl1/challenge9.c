#include <stdio.h>

int main(){
	char c;
	printf("enttrer un caractere :");
	scanf("%c", &c);
	if(c>='a' && c< 'z' || c>='A' && c< 'Z'){
		printf("%c est un alphabet\n", c);
		if(c>='a' && c< 'z')
			printf("miniscule");
		else
			printf("majiscule");
	}
		
	return 0 ;
}
