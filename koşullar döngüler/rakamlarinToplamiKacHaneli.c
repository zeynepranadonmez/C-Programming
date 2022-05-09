#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	1234 rakamlarý toplamý
	
	kaç haneli ?
	
	*/
	
	int n = 0;
	int hane = 0;
	int toplam = 0;
	
	printf("Sayiyi giriniz:");
	scanf("%d" , &n);
	
	do{
		// 1234 10 ile bölümünden kalan 1 ler basamaðý..
		
		toplam += (n%10);
		
		hane ++;
		
		n = n / 10; // 10 ile bölümünden çýkan sayý 123 hane azaltýlmýþ yeni sayýmýz oluyot
		
	}
	
	while(n>0);
	
	printf("Rakamlari toplami %d ve %d haneli" , toplam , hane);
	

	return 0;
}
