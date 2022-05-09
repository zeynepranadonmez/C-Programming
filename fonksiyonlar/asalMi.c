#include <stdio.h>

/*

Asal m� de�il mi?

asal say� 2 den kendisine kadar olan say�lar�n hi�birine tam b�l�nmeyen say�d�r

sadece 1 e ve kendisine b�l�n�r

*/

int asalMi(int sayi){
	
	int i;
	
	for(i=2 ; i<sayi ; i++){
		
		if(sayi % i == 0){
			return 0; //a�a��dakileri kontrol etmeden 0 lan�r return fonksiyonlar�n bitmesini sa�l�yor
		}
	}
	
	return 1;
}

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("Bir sayi giriniz");
	scanf("%d", &n);
	
	if(asalMi(n) == 0){
		
		printf("Bu sayi asal degildir.");
	}
	else{

		printf("Bu sayi asaldir.");
	}
	

	return 0;
}
