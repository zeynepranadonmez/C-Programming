#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int vize, final;
	float ortalama;
	
	printf("Vize notunuzu giriniz:");
	scanf("%d", &vize);
	printf("Final notunuzu giriniz:");
	scanf("%d", &final);
	
	ortalama = (vize * (40/100)) + (final * (60/100));

	
	if(ortalama >= 70){
		printf("Dersten gectiniz.");
	}
	else{
		printf("\nDersten kaldiniz.");
	}


	return 0;
}
