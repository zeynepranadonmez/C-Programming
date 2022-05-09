#include <stdio.h>

int topla(int sayi1, int sayi2){
	
	return (sayi1 + sayi2);
}

int main(int argc, char *argv[]) {
	
	int sayi1;
	int sayi2;
	
	printf("Lutfen iki adet sayi giriniz:\n");
	scanf("%d %d", &sayi1, &sayi2);
	
	printf("Girdiginiz sayilarin toplami: %d",topla(sayi1,sayi2));
	
	

	

	return 0;
}
