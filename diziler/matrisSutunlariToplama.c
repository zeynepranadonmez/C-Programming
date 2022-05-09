#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	3*5 lik 3 satýrý 5 sütunu olan matris:
	
	3 5 1 3 2 
	4 4 4 5 5
	9 8 9 7 7 
	
	Sütunlarý topla 
	sonuç:
	
	16 17 14 15 14
	
	*/
	
	int matris[3][5];
	int i, j;
	int sum = 0;
	
	//matrisi oluþturuyoruz
	for(i=0 ; i<3 ; i++){
		
		for(j=0 ; j<5 ; j++){
			
			scanf("%d", &matris[i][j]);
		}
	}
	
	for(i=0 ; i<3 ; i++){
		
		for(j=0 ; j<5 ; j++){
			
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	//matrisimiz oluþtýu
	
	//sütunlarý toplamaya baþlayacaðýz
	
	for(j=0 ; j<5 ; j++){
		
		for(i=0 ; i<3 ; i++){
			
			sum += matris[i][j]; //0 0  1 0  2 0
		}
		printf("%d ", sum);
		
		sum = 0; //2. sütna geçmek için
	}

	return 0;
}
