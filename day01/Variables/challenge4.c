#include<stdio.h>\

int main(int argc, char const *argv){
	float vms, vkmh;
	printf("entrer la vittesse en km/h : ");
	scanf("%f", &vkmh);
	vms = vkmh * 0.27778;
	printf("la vitesse en m/s est : %f", vms);
	return 0;
}
