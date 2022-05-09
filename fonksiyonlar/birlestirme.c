#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	// STRCAT
	
	// BÝRLEÞTÝRME
	
	char kitapAd[30], yazar[30], kitapYazar[60];
	
	printf("Kitap adi ve yazari girin: ");
	scanf("%s%s", &kitapAd, &yazar);
	
	strcat(kitapYazar,kitapAd);
	strcat(kitapYazar,"");
	strcat(kitapYazar,"<-->");
	strcat(kitapYazar,yazar);
	
	printf("\n\n");
	printf("%s",kitapYazar);
	

	


	return 0;
}
