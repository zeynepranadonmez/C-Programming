#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	char kitap[40];
	printf("Kitabin ismi: ");
	scanf("%s", kitap);
	
	printf("%s", kitap);
	
	printf("\n");
	
	printf("%10s", kitap); // ilk 10 karakteri kullanýr 5 karakterli kelimeyse 5 karakterli bir bos alan býrakýr
	
	printf("\n");
	
	printf("%20.5s", kitap); // 20 karakterli alan ayýrdý .5s diyerek 5 karakteri kullandýrdýk
	
	printf("\n");
	
	printf("%-20s", kitap); // sola doðru dayaylý olarak yapýyor boþlar null 
	
	return 0;
}
