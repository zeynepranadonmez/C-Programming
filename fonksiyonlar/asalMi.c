#include <stdio.h>

/*

Asal mý deðil mi?

asal sayý 2 den kendisine kadar olan sayýlarýn hiçbirine tam bölünmeyen sayýdýr

sadece 1 e ve kendisine bölünür

*/

int asalMi(int sayi){
	
	int i;
	
	for(i=2 ; i<sayi ; i++){
		
		if(sayi % i == 0){
			return 0; //aþaðýdakileri kontrol etmeden 0 lanýr return fonksiyonlarýn bitmesini saðlýyor
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
