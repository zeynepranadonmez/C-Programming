#include <stdio.h>

int main(int argc, char *argv[]) {
	
	// kullanýcýdan 5 sayý iste onlarý diziye depola ve bu 5 sayýnýn aritmetik ortalamasýný alýcaz
	
	
	    float toplam = 0.0;
	    
		float sayilar [5];
		int i;
		
		for(i=0 ; i<5 ; i++){
			printf("Bir sayi giriniz:");
			scanf("%f", &sayilar[i]);
			
		} 
		
		for(i=0 ; i<5 ; i++){
			toplam += sayilar[i];
		}
		printf("Girdiginiz sayilarin aritmetik ortalamasi %.2f dir", toplam / 5);
	


	return 0;
}
