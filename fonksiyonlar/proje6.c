#include <stdio.h>

void bastir(int matrisimiz[][4], int size){ // 2. boyutu göndermemiz gereikiyor yoksa hata verir
	
	int i, j;
	
	for(i=0 ; i<size ; i++){
		
		for(j=0 ; j<4 ; j++){
			
			printf("%d", matrisimiz[i][j]);
		}
		
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	
	int matris[3][4];
	int i, j;
	
	printf("Matrisi doldurunuz.");
	
	for(i=0 ; i<3 ; i++){
		
		for(j=0 ; j<4 ; j++){
			
			scanf("%d", &matris[i][j]);
			
		}
	}
	
	bastir(matris,3);
	 
	return 0;
}
