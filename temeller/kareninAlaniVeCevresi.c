#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	// karenin alan� ve �evresini hesaplay�n�z

	int kenar, alan, cevre;
	
	printf("Karenin kenar uzunlugunu giriniz: ");
	scanf("%d", &kenar);
	
	alan = (kenar*kenar);
	cevre = 4*(kenar);
	
	printf("Karenin alani: %d", alan);
	printf("\nKarenin cevresi: %d", cevre);


	return 0;
}
