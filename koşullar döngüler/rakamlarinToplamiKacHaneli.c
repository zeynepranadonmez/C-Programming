#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	1234 rakamlar� toplam�
	
	ka� haneli ?
	
	*/
	
	int n = 0;
	int hane = 0;
	int toplam = 0;
	
	printf("Sayiyi giriniz:");
	scanf("%d" , &n);
	
	do{
		// 1234 10 ile b�l�m�nden kalan 1 ler basama��..
		
		toplam += (n%10);
		
		hane ++;
		
		n = n / 10; // 10 ile b�l�m�nden ��kan say� 123 hane azalt�lm�� yeni say�m�z oluyot
		
	}
	
	while(n>0);
	
	printf("Rakamlari toplami %d ve %d haneli" , toplam , hane);
	

	return 0;
}
