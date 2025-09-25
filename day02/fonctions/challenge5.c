#include <stdio.h>

int fact(int n){
	int p=1, i;
	if(n == 0)
		return 1;
	for(i=1 ; i<=n ; i++)
		p *= i;
	return p;
}
int main(){
	int n;
	printf("entrer un nombre :");
	scanf("%d", &n);
	printf("le fact du %d est %d", n , fact(n));
	return 0 ;
}
