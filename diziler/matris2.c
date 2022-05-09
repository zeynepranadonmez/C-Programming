#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	1 2 3   0. satır
	4 5 6   1. satır
	7 8 9   2. satır
	
	*/
	
	int matris[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	int i, j;
	
	for(i=0 ; i<3 ; i++){
		
		for(j=0 ; j<3 ; j++){
			
			printf("%d ", matris[i][j]);
		}
		
		printf("\n");
	}
	



	
	return 0;
}
