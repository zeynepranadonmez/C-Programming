#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	For döngüsü ile fibonacci serisi yazdýrma
	
	fibonacci serisi: 
	
	1,1,2,3,5,8,13,21....
	
	*/
	
	int ilkSayi = 1;
	int ikinciSayi = 1;
	int i;
	
	printf("%d\n%d\n", ilkSayi , ikinciSayi);
	
	for(i=0 ; i<12 ; i++ ){
		
		int temp = ikinciSayi;
		ikinciSayi += ilkSayi;
		ilkSayi = temp;
		
		printf("%d\n", ikinciSayi);
	}


	return 0;
}
