#include <stdio.h>

int main(int argc, char *argv[]) {
	
	// i�i dolu dikd�rtgen olu�turma
	
	int en, boy, i, j;
	
	printf("En degeri: ");
	scanf("%d", &en);
	printf("Boy degeri: ");
	scanf("%d", &boy);
	
	for(i=1 ; i<=boy ; i++){
		
		for(j=1 ; j<=en ; j++){
			
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
