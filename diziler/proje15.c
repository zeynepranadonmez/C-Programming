#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	DÝZÝLER
	
	*/
	
	int sayilar [] = {1,2,3,4,5};
	
	printf("%d\n", sayilar[2]);
	printf("\n-----------------------------------------------\n");
	
	int i = 0;
	
	for(; i<=4 ; i++){
		
		printf("%d\n", sayilar[i]);
	}
	 

	return 0;
}
