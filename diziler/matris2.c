#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	1 2 3   0. sat�r
	4 5 6   1. sat�r
	7 8 9   2. sat�r
	
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
