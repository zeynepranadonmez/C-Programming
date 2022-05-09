#include <stdio.h>

int main(int argc, char *argv[]) {
	
	// girilen sayýnýn faktoryelini while ile bulan kod
	
	int sayi;
	int faktoryel;
	faktoryel = 1;
	sayi = 5;
	
	while(sayi>1){
		faktoryel = faktoryel * sayi;
		sayi--;
		printf("%d\n", faktoryel);
	}
	
	printf("Sonuc: %d",faktoryel);
	

	return 0;
}
