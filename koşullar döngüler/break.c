#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	D�NG�LERDE BREAK DEY�M�
	
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
	
// girdi�iniz say�lar� s�rayla toplar

	return 0;
}
