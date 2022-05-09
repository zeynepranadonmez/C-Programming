#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	// SÝN - COS
	
	double derece, sonucSin, sonucCos;
	
	printf("Dereceyi giriniz: ");
	scanf("%lf", &derece);
	
	sonucSin = sin(derece);
	printf("Sinus: %lf\n", sonucSin);
	
	sonucCos = cos(derece);
	printf("Cosinus: %lf", sonucCos);

	return 0;
}
