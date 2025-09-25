#include <stdio.h>

int fibo(int n){
	int tab[n+1],i;
	tab[0] = 0;
	tab[1] = 1;
	for(i=2; i<= n ; i++)
		tab[i] = tab[i-1] + tab[i-2];
	return tab[n];
}
int main(){
	int n;
	printf("entrer un nombre :");
	scanf("%d", &n);
	printf("le fibo du %d eme terme est : %d", n , fibo(n));
	return 0;
}
