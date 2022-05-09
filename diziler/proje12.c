#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i, j;
	
	for(i=1 ; i<=5 ; i++){
		
		for(j=1 ; j<=i ; j++){
			
			printf("*");
		}
		printf("\n");
	}
	
	int k, m;
	
	for(k=1 ; k<=5 ; k++){
		
		for(m=5 ; m>=k ; m--){
			
			printf("*");
		}
		printf("\n");
	}
	

	return 0;
}
