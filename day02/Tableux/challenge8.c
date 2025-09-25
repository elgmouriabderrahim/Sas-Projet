#include <stdio.h>

main(){
	int i,tab1[] = {1,3,5,3,5,7,5,73,9},tab2[9];
	for(i=0 ; i<9 ; i++){
		tab2[i] = tab1[i];
	}
	printf("tableau original\n");
	for(i=0 ; i<9 ; i++){
		printf("%d\t",tab1[i]);
	}
	printf("\ntableau copie\n");
	for(i=0 ; i<9 ; i++){
		printf("%d\t", tab2[i]);
	}
	
}
