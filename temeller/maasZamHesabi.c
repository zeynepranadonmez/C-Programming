#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	/*
	
	Aylýk 2500 TL maaþ alan kiþinin maaþýna 
	% 12 zam yapýlýrsa yeni maaþý ne kadar olur	
	
	*/
	
	float maas, yeniMaas;
	
	printf("Maasinizi girin: ");
	scanf("%f", &maas);

	yeniMaas = maas + (maas * (12/100));
	
	printf("Zamli yeni maasiniz: %f", yeniMaas);
	
	


	return 0;
}
