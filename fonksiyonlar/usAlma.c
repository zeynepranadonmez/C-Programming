#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	// ÜS ALMA
	
	//POW
	
	int x, y;
	int sonuc;
	
	printf("Tabani giriniz: ");
	scanf("%d", &x);
	
	printf("Us degerini giriniz: ");
	scanf("%d", &y);
	
	sonuc = pow(x,y);
	printf("Sonuc: %d",sonuc);
	


	return 0;
}
