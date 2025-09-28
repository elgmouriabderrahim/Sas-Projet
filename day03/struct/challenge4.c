#include <stdio.h>
struct point{
	int x, y;
};
typedef struct point point;
int main(){
	point point1 ,*p;
	p = &point1;
	printf("entrer les cordonnees de point:\n");
	printf("x = ");
	scanf("%d", &p->x);
	printf("y = ");
	scanf("%d", &p->y);
	printf("x = %d\ny = %d", p->x, p->y);
	return 0;
}
