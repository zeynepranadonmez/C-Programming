#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	// LOGARÝTMA
	
	// LOG
	
	double sayi, sonuc;
	printf("Sayiyi girin: ");
	scanf("%lf", &sayi);
	
	sonuc = log(sayi);
	
	printf("Sonuc: %.7lf",sonuc);
	

	return 0;
}
