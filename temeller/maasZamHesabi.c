#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	/*
	
	Ayl�k 2500 TL maa� alan ki�inin maa��na 
	% 12 zam yap�l�rsa yeni maa�� ne kadar olur	
	
	*/
	
	float maas, yeniMaas;
	
	printf("Maasinizi girin: ");
	scanf("%f", &maas);

	yeniMaas = maas + (maas * (12/100));
	
	printf("Zamli yeni maasiniz: %f", yeniMaas);
	
	


	return 0;
}
