#include <stdio.h>

void hatayiBas(int hata){   // hiçbir þey dönmüyor
	
	printf("Hata Kodu %d", hata);
}

int main(int argc, char *argv[]) {
	
	/*
	
	FONKSÝYONLAR
	
	Fonksiyon tanýmlama:
	
	donusTipi fonksiyonunAdi (Parametreler){

	//// fonksiyon bloðu
	
	yapýlacak iþlemler
}
	
	*/
	
	int sayi;
	
	printf("Lutfen negatif olmayan bir sayi girin:");
	scanf("%d", &sayi);
	
	if(sayi<0){
		hatayiBas(404);
	}
	else{
		printf("Tebrikler...");
	}
	

	return 0;
}
