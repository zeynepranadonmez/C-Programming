#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	// YUVARLAMA
	
	// FLOOR A�A�I
	
	//CE�L YUKARI
	
	double sayi, sonucAlt, sonucUst;
	
	printf("Degeri girin: ");
	scanf("%lf", &sayi);
	
	sonucAlt = floor(sayi);
	printf("Sonuc alt: %.f",sonucAlt);
	
	printf("\n");
	
	sonucUst = ceil(sayi);
	printf("Sonuc ust: %.f",sonucUst);

	return 0;
}
