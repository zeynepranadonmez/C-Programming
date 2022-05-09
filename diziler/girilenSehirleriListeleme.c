#include <stdio.h>

int main(int argc, char *argv[]) {
	
	// klavyeden girilen þehirleri listelemek
	
	char sehir[15];
	int i;
	
	for(i=0 ; i<2 ; i++){
		
		printf("Sehri giriniz:");
		scanf("%s", sehir);
		printf("Girdiginiz sehir: %s",sehir);
		printf("\n");
	}
	

	 

	return 0;
}
