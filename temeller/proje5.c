#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	/* 
	
	15 kg bagaj - 8 kg el
	her geçiþte kg baþýna 5 tl ekleniyor
	
	*/
	
	int bagaj = 15;
	int el = 8;
	int yeniBagaj, yeniEl;
	int ekstraBagaj, ekstraEl;
	int bagajUcreti , elUcreti, toplamUcret;
	
	printf("Bagaj kilonuzu giriniz: ");
	scanf("%d", &yeniBagaj);
	printf("\nEl kilonuzu giriniz: ");
	scanf("%d", &yeniEl);
	
	ekstraBagaj = yeniBagaj - bagaj;
	ekstraEl = yeniEl - el;
	
	printf("\nEkstra bagaj: %d \nEkstra el: %d", ekstraBagaj, ekstraEl);
	
	bagajUcreti = ekstraBagaj * 5;
	elUcreti = ekstraEl * 5;
	toplamUcret = bagajUcreti + elUcreti;
	
	printf("\nEkstra bagaj ucreti: %d \nEkstra el ucreti: %d", bagajUcreti, elUcreti);
	
	printf("\nEkstralar icin ödenecek toplam ucretiniz: %d", toplamUcret);
	


	return 0;
}
