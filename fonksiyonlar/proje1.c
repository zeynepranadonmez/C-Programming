#include <stdio.h>

void hatayiBas(int hata){   // hi�bir �ey d�nm�yor
	
	printf("Hata Kodu %d", hata);
}

int main(int argc, char *argv[]) {
	
	/*
	
	FONKS�YONLAR
	
	Fonksiyon tan�mlama:
	
	donusTipi fonksiyonunAdi (Parametreler){

	//// fonksiyon blo�u
	
	yap�lacak i�lemler
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
