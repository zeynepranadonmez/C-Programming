#include <stdio.h>

int main(int argc, char *argv[]) {
	/*
	
	DEÐÝÞKENLER
	
	CHAR   1 byte 8 bit 0 dan 255(2^8) e kadar deðer alabilir
	INT    4 byte 32 bit -2^16 dan 2^16 ya kadar deðer alýr
	SHORT  2 byte 16 bit -2^8 den 2^8 e kadar deðer alabilir
	LONG   8 byte 64 bit -2^32 den 2^32 ye kadar deðer alabilir
	FLOAT  byte ý iþletim sistemine göre deðiþebilir 
	DOUBLE byte ý iþletim sistemine göre deðiþebilir
	
	
	FORMAT BELÝRLEYÝCÝLER
	
	%d   int
	%f   float ve double
	%c   char
	%s   karakter dizileri ("Cprogramlama")
	
	printf("%s", "Cprogramlama") ---> Cprogramlama

	*/
	
	int a1 = 42;
	char b1 = 66;
	char b2 = 'B';
	float c1 = 4.2;
	double d1 = 0.21;
	
	printf("%d %c %d %f %f %s\n",a1,b1,b2,c1,d1,"Yazilim Bilimi");
	printf("\n");
	printf("%d %c %d %.1f %.2f %s\n",a1,b1,b2,c1,d1,"Yazilim Bilimi");
	printf("\n");
	
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(short int));
	printf("%d byte\n",sizeof(long int));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(double));
	
	
	return 0;
}
