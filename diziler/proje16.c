#include <stdio.h>

int main(int argc, char *argv[]) {
	
/*	char isim1[] = "Murat";
	printf("%c", isim1[1]);
	
	*/
	
	char isim[20];
	printf("Isminizi girin:");
	scanf("%s", isim);  // & koymadan yapabiliyoz karakter dizisinde oluyor
	printf("Isminizi girin: %s", isim);
	
	

	return 0;
}
