#include <stdio.h>

int main(int argc, char const *argvp[]){
char c;
printf("entrer un caratere: ");
scanf("%c", &c);
switch(c){
	case 'a' : printf("a est un voyelle"); break;
	case 'e' : printf("e est un voyelle"); break;
	case 'u' : printf("u est un voyelle"); break;
	case 'o' : printf("o eat un voyelle"); break;
	case 'y' : printf("y est un voyelle"); break;
	default  : printf("%c n'est pas un voyelle", c);
}

}
