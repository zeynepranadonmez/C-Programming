#include <stdio.h>

int main(int argc, char *argv[]) {
	
	// dizileri listeledi
	
	int dizi[100];
	int i,sayi;
	printf("Eleman sayisi: ");
	scanf("%d", &sayi);
	
	for(i=0 ; i<sayi ; i++){
		printf("Dizinin %d. degerini girin: ",i+1);
		scanf("%d", &dizi[i]);
	}
	printf("\n\n");
	
	for(i=0 ; i<sayi ; i++){
		printf("%d ",dizi[i]);
	}
	


	return 0;
}
