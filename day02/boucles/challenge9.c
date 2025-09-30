#include<stdio.h>


int main(){ 
    float base, puis= 1;
    int n, i;
    printf("entrer la base (positive): ");
    scanf("%f", &base);
    printf("entrer l'exposant'(non negatif): ");
    scanf("%d", &n);
    if(n == 0)
    	printf("%f^%d = %f", base, n, 1);
    else{
    	i = 1;
    	while(i<=n){
    	puis *= base;
    	i++;
		}
    	printf("%f^%d = %f", base, n, puis);
	}
    
	return 0;
}
