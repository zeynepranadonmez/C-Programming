#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	// üç sýnav ve bir proje notu girilen öðrencinin ortalamasý
	
	int sinav1, sinav2, sinav3, proje;
	float ortalama;
	
	printf("1. sinavin notunu giriniz: ");
	scanf("%d", &sinav1);
	printf("\n2. sinavin notunu giriniz: ");
	scanf("%d", &sinav2);
	printf("\n3. sinavin notunu giriniz: ");
	scanf("%d", &sinav3);
	printf("\nProjenin notunu giriniz: ");
	scanf("%d", &proje);
	
	ortalama = (sinav1 + sinav2 + sinav3 + proje)/4;
	
	printf("\nDersinizin donem sonu ortalamasi: %f", ortalama);


	return 0;
}
