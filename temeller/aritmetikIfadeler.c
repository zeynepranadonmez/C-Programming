#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	ARÝTMETÝK ÝFADELER
	
	iþlem sýrasý:
	tekli operatörler  (+) (-) (-x, +x)  1. öncelik kendi aralarýnda saðdan sola
	ikili operatörler  * , / , %         2. öncelik kendi aralarýnda soldan saða
	ikili operatörler  + , -             3. öncelik kendi aralarýnda soldan saða
	
	parantez içi her zaman ilk uygulanýr.
	
	*/
	
	
	int x1 = 1;
	int x2 = -1;
	
	printf("%d\n", 12+9);
	printf("%d\n", 12%9);
	
	printf("%d\n", -x1);
	printf("%d\n", -x2);
	
	
	return 0;
}
