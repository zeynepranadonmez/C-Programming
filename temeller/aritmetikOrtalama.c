#include <stdio.h>

int main(int argc, char *argv[]) {
	
	// kullan�c�dan 5 say� iste o say�lar�n aritmetik ortalamas�n� al ve ekrana bas
	
	int sayi1,sayi2,sayi3,sayi4,sayi5;
	float ortalama;
	
	printf("1. sayiyi girin: ");
	scanf("%d", &sayi1);
	
	printf("2. sayiyi girin: ");
	scanf("%d", &sayi2);
	
	printf("3. sayiyi girin: ");
	scanf("%d", &sayi3);
	
	printf("4. sayiyi girin: ");
	scanf("%d", &sayi4);
	
	printf("5. sayiyi girin: ");
	scanf("%d", &sayi5);
	
	ortalama = (sayi1+sayi2+sayi3+sayi4+sayi5)/5;
	
	printf("Girdiginiz sayilarin ortalamasi: %f" , ortalama);

	return 0;
}
