#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]){
	int x1,x2,y1,y2,z1,z2;
	float d;
	printf("entrer les cordonnees de point 1:\n");
	scanf("%d %d %d", &x1, &y1, &z1);
	printf("entrer les cordonnees de point 2:\n");
	scanf("%d %d %d", &x2, &y2, &z2);
	d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) + (z2-z1)*(z2-z1));
	printf(" la distance entre (%d,%d,%d) et (%d,%d,%d) est %f", x1, y1, z1, x2, y2, z2, d);
	return 0;
}
