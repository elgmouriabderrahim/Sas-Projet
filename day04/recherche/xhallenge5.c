#include <stdio.h>

int RBCH(char chaine[], char ch[]){
	int i, j, k;
//	printf("%s\n%s\n", chaine, ch);
	while(chaine[i] != '\0'){
		if(chaine[i] == ch[0]){
			j = i+1;
			k = 1;
			while(ch[k] != '\0'){
				if(ch[k] != chaine[j])
					break;
				k++;
				j++;
			}
			if(ch[k] == '\0')
				return i;
		}
		i++;
	}
	return 0;
}
int main(){
	char chaine[1000], ch[100];
	printf("enter a sentence:");
	scanf("%[^\n]", chaine);
	getchar();
	printf("enter the sub-sentence ur looking for:");
	scanf("%[^\n]", ch);
		if(RBCH(chaine, ch))
			printf("it exists.\n");
		else
			printf("it doesn't exist'\n");
	return 0;
}

