#include<stdio.h>
int main(int argc, char const *argv){
	float C;
	printf("entrer la temperature en celsius: ");
	scanf("%f", &C);
	if(C < 0){
		printf("l'�tat de l'eau � cette temp�rature est : solide");
	}else if(C <= 100){
		printf("l'�tat de l'eau � cette temp�rature est : liquide");
	}else{
	printf("l'�tat de l'eau � cette temp�rature est : gaz");	
	}
	return 0;
}
