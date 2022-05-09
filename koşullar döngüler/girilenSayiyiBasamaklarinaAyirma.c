#include <stdio.h>

int main(int argc, char *argv[]) {
	
	// 3 basamaklý sayýyý basamaklarýna ayýran program
	
	int sayi;
	sayi = 486;
	int birler, onlar, yuzler;
	
	printf("%d sayisini basamaklarina ayiralim\n",sayi);
	
	yuzler = (sayi / 100);
	printf("Yuzler basamagi: %d\n", yuzler);
	
 	onlar = ( (sayi / 10) % 10 );
 	printf("Onlar basamagi: %d\n", onlar);
	
	birler = (sayi % 10);
	printf("Birler basamagi: %d\n", birler);
	


	return 0;
}
