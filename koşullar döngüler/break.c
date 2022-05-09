#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	DÖNGÜLERDE BREAK DEYÝMÝ
	
	*/
	
	int toplam = 0;
	int i;
	int sayi;
	
	for(i=0 ; true ; i++){
		printf("Sayiyi giriniz: (Cikmak icin -1 basin)"); //sonsuzdan
		scanf("%d", &sayi);
		
		if(sayi == -1){
			break;
		}
		
			toplam += sayi;
	}
	
	printf("%d", toplam);
	
// girdiðiniz sayýlarý sýrayla toplar

	return 0;
}
