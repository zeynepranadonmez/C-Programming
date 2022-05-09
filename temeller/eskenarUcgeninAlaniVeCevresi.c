#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	// eþkenar üçgende alan ve çevre hesabý
	
	 int kenar;
	 float cevre, alan;
	 
	 printf("Ucgenin kenar uzunlugunu giriniz: ");
	 scanf("%d", &kenar);
	 printf("Ucgenin kenar uzunlugu: %d", kenar);
	 
	 cevre = 3 * (kenar);
	 alan = ((sqrt(3)) / 4 ) * (kenar * kenar);
	 
	 printf("\nUcgenin cevresi: %f", cevre);
	 printf("\nUcgenin alani: %f", alan);

	return 0;
}
