#include<stdio.h>
int main(int argc, char const *argv){
	float C;
	printf("entrer la temperature en celsius: ");
	scanf("%f", &C);
	if(C < 0){
		printf("l'état de l'eau à cette température est : solide");
	}else if(C <= 100){
		printf("l'état de l'eau à cette température est : liquide");
	}else{
	printf("l'état de l'eau à cette température est : gaz");	
	}
	return 0;
}
