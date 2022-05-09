#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	1 2 3   0. satır
	4 5 6   1. satır
	7 8 9   2. satır
	
	*/
	
	int matris[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	printf("%d",matris[2][2]); //2. satır 2. sütun 9 u verir
	
	return 0;
}
