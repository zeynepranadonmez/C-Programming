#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i;
	int faktor = 1;
	
	for(i=1 ; i<=5 ; i++){
		
		faktor = faktor * i;	
	}
	
	printf("5 sayisinin faktoryel degeri: %d", faktor);
	

	return 0;
}
