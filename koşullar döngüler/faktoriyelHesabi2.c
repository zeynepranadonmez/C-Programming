#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i;
	int sayi;
	int faktoryel = 1;
	
	printf("Faktoryeli alinacak sayi: ");
	scanf("%d", &sayi);
	
	for(i=1 ; i<=sayi ; i++){
		
		faktoryel = faktoryel * i;
	}
	
	printf("Sonucunuz: %d", faktoryel);
	


	return 0;
}
